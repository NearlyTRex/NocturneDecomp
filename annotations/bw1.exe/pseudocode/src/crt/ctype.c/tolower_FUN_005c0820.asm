; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_ctype_c_tolower_FUN_005c0820(int character)
;
; Parameters:
; int              Stack[0x4]:4   character
;
; XREF[9]:
;   core_actor.cpp_getActorClassByName_FUN_0040c240 at 0040c28b
;   core_actor.cpp_hashClassName_FUN_0040c110 at 0040c135
;   core_actor.cpp_matchClassTerm_FUN_0040c370 at 0040c432
;   core_actor.cpp_registerActorClass_FUN_0040c160 at 0040c1f2
;   crt_unknown.c_FUN_005c140c at 005c142b
;   crt_unknown.c_FUN_005c63e8 at 005c63fb
;   crt_unknown.c_FUN_005c8094 at 005c8201
;   shape_edittool.cpp_wildcardStringMatch_FUN_0049dea0 at 0049df18
;   unkafter_2d.cpp_FUN_005ce4a8 at 005ce4c3
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005c0820
        ;   Label: crt_ctype.c_tolower_FUN_005c0820
    CMP EAX,0x41                        ; 005c0824
    JL 0x005c0831                       ; 005c0827
        ;   XREF to: 005c0831 (CONDITIONAL_JUMP)  ; LAB_005c0831
    CMP EAX,0x5a                        ; 005c0829
    JG 0x005c0831                       ; 005c082c
        ;   XREF to: 005c0831 (CONDITIONAL_JUMP)  ; LAB_005c0831
    ADD EAX,0x20                        ; 005c082e
    RET                                 ; 005c0831
        ;   Label: LAB_005c0831

