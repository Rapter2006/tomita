#encoding "utf-8"    // сообщаем парсеру о том, в какой кодировке написана грамматика
#GRAMMAR_ROOT S      // указываем корневой нетерминал грамматики

Command -> 'создать' | 'открыть';
Element -> 'задача' | 'событие';

CommandInterp -> Command interp (Fact.Command::not_norm);
ElementInterp -> Element interp (Fact.Element);
Name -> Noun interp(Fact.Name);


S -> CommandInterp ElementInterp Name;



