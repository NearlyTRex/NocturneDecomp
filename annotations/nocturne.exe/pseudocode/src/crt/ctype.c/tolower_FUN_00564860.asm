; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_ctype_c_tolower_FUN_00564860(int param_1)
;
;
; XREF[8]:
;   FUN_005684f8 at 0056850b
;   FUN_0056c864 at 0056c9d1
;   FUN_005738c8 at 005738e3
;   core_actor.cpp_getActorClassByName_FUN_0040d4d0 at 0040d51b
;   core_actor.cpp_matchClassTerm_FUN_0040d600 at 0040d6c2
;   core_actor.cpp_registerActorClass_FUN_0040d3f0 at 0040d482
;   crt_unknown.c_FUN_0056551c at 0056553b
;   shape_edittool.cpp_wildcardStringMatch_FUN_004775b0 at 00477628
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00564860
        ;   Label: crt_ctype.c_tolower_FUN_00564860
    CMP EAX,0x41                        ; 00564864
    JL 0x00564871                       ; 00564867
        ;   XREF to: 00564871 (CONDITIONAL_JUMP)  ; LAB_00564871
    CMP EAX,0x5a                        ; 00564869
    JG 0x00564871                       ; 0056486c
        ;   XREF to: 00564871 (CONDITIONAL_JUMP)  ; LAB_00564871
    ADD EAX,0x20                        ; 0056486e
    RET                                 ; 00564871
        ;   Label: LAB_00564871

