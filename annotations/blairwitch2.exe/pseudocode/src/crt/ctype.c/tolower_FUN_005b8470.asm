; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_ctype_c_tolower_FUN_005b8470(int character)
;
; Parameters:
; int              Stack[0x4]:4   character
;
; XREF[9]:
;   core_actor.cpp_getActorClassByName_FUN_0040c530 at 0040c57b
;   core_actor.cpp_hashClassName_FUN_0040c400 at 0040c425
;   core_actor.cpp_matchClassTerm_FUN_0040c660 at 0040c722
;   core_actor.cpp_registerActorClass_FUN_0040c450 at 0040c4e2
;   crt_unknown.c_FUN_005b8f9c at 005b8fbb
;   crt_unknown.c_FUN_005be118 at 005be12b
;   crt_unknown.c_FUN_005bfdd4 at 005bff41
;   shape_edittool.cpp_wildcardStringMatch_FUN_00485840 at 004858b8
;   unkafter_2d.cpp_FUN_005c61a8 at 005c61c3
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005b8470
        ;   Label: crt_ctype.c_tolower_FUN_005b8470
    CMP EAX,0x41                        ; 005b8474
    JL 0x005b8481                       ; 005b8477
        ;   XREF to: 005b8481 (CONDITIONAL_JUMP)  ; LAB_005b8481
    CMP EAX,0x5a                        ; 005b8479
    JG 0x005b8481                       ; 005b847c
        ;   XREF to: 005b8481 (CONDITIONAL_JUMP)  ; LAB_005b8481
    ADD EAX,0x20                        ; 005b847e
    RET                                 ; 005b8481
        ;   Label: LAB_005b8481

