#encoding "utf-8"    // сообщаем парсеру о том, в какой кодировке написана грамматика
#GRAMMAR_ROOT S      // указываем корневой нетерминал грамматики

Command -> 'создать' | 'открыть';
Element -> 'задача' | 'событие';

CommandInterp -> Command interp (Fact.Command::norm="inf");
ElementInterp -> Element interp (Fact.Element::norm="nom,sg");

Name -> Noun | Adj | Verb;
Name -> Name Name;
Name -> Name Name Name;
Name -> Name Name Name Name;
Name -> Name Name Name Name Name;
Names -> Name interp(Fact.Name); 




S -> CommandInterp ElementInterp Names;
S -> CommandInterp ElementInterp Names "на" Noun;
 



