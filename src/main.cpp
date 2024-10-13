//#include "Games/BreakOut.h"
//#include "DemoGame/DemoGame.h"
//#include "Games/Level2.h"
#include "Games/SamuraisVsMongols_Lvl1.h"

int main() {
  //BreakOut demo = BreakOut();
  //DemoGame demo = DemoGame();
  SamuraisVsMongols_Lvl1 demo = SamuraisVsMongols_Lvl1();
  //SamuraisVsMongols demo = SamuraisVsMongols();
  demo.setup();
  demo.run();
  return 0;
}
