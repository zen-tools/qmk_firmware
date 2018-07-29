#ifndef PC9801NV_H
#define PC9801NV_H

#include "quantum.h"

// This a shortcut to help you visually see your layout.
/*
 ,-------------------------------------------------------------------------------.
 |Esc |Stop|F1  |F2  |F3  |F4  |F5  |F6  |F7  |F8  |F9  |F10 |INS |DEL |PgU |PgD |
 | 1  | 2  | 3  | 4  | 5  | 6  | 7  | 8  | 9  | 0  | -  | ^  |JPY |Bsp |Copy|----'
 |TAB | Q  | W  | E  | R  | T  | Y  | U  | I  | O  | P  | @  | [  |Ent |Home|
 |CTRL| A  | S  | D  | F  | G  | H  | J  | K  | L  | ;  | :  | ]  |    |Help|
 |SHFT| Z  | X  | C  | V  | B  | N  | M  | ,  | ,  | /  | RO |SHFT|Up  |    |
 |Caps|KANA|Gui |MHEM|            Space            |HENK|Num |Lef |Dow |Rig |
 `--------------------------------------------------------------------------'
 */
// The first section contains all of the arguements
// The second converts the arguments into a two-dimensional array
#define KEYMAP_ANSI( \
  k00, k70, k3a, k4a, k5a, k71, k61, k01, k11, k21, k31, k41, k51, k72, k62, k02, \
  k10, k20, k30, k40, k50, k73, k06, k16, k26, k36, k46, k12, k22, k32, k60,      \
  k63, k03, k13, k23, k33, k43, k53, k56, k07, k17, k27, k52, k79, k29, k42,      \
  k7a, k74, k64, k04, k14, k24, k34, k37, k47, k57, k08, k09, k19,      k69,      \
  k1a, k44, k54, k75, k65, k05, k15, k18, k28, k38, k48, k58,      k39,           \
  k6a, k0a, k2a, k25,                k35,                k45, k76, k55, k49, k59  \
) \
{ \
  { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a },       \
  { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a },       \
  { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a },       \
  { k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a },       \
  { k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4a },       \
  { k50, k51, k52, k53, k54, k55, k56, k57, k58, k59, k5a },       \
  { k60, k61, k62, k63, k64, k65, KC_NO, KC_NO, KC_NO, k69, k6a }, \
  { k70, k71, k72, k73, k74, k75, k76, KC_NO, KC_NO, k79, k7a }    \
}

#endif
