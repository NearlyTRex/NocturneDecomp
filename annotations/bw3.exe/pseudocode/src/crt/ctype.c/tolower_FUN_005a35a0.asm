; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_ctype_c_tolower_FUN_005a35a0(int character)
;
; Parameters:
; int              Stack[0x4]:4   character
;
; XREF[9]:
;   core_actor.cpp_getActorClassByName_FUN_0040c480 at 0040c4cb
;   core_actor.cpp_hashClassName_FUN_0040c350 at 0040c375
;   core_actor.cpp_matchClassTerm_FUN_0040c5b0 at 0040c672
;   core_actor.cpp_registerActorClass_FUN_0040c3a0 at 0040c432
;   crt_unknown.c_FUN_005a427c at 005a429b
;   crt_unknown.c_FUN_005a9258 at 005a926b
;   crt_unknown.c_FUN_005aaed4 at 005ab041
;   shape_edittool.cpp_wildcardStringMatch_FUN_00486a40 at 00486ab8
;   unkafter_2d.cpp_FUN_005b1238 at 005b1253
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a35a0
        ;   Label: crt_ctype.c_tolower_FUN_005a35a0
    CMP EAX,0x41                        ; 005a35a4
    JL 0x005a35b1                       ; 005a35a7
        ;   XREF to: 005a35b1 (CONDITIONAL_JUMP)  ; LAB_005a35b1
    CMP EAX,0x5a                        ; 005a35a9
    JG 0x005a35b1                       ; 005a35ac
        ;   XREF to: 005a35b1 (CONDITIONAL_JUMP)  ; LAB_005a35b1
    ADD EAX,0x20                        ; 005a35ae
    RET                                 ; 005a35b1
        ;   Label: LAB_005a35b1

