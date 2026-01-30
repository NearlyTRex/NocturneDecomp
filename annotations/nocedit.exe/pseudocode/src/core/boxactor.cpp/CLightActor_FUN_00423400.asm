; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_boxactor_cpp_CLightActor_FUN_00423400(void)
;
; Local Variables:
; undefined8       Stack[-0xc]:8  local_c
;
; XREF[1]:
;   core_boxactor.cpp_CLightActor_FUN_004234e0 at 00423560
;
; Referenced Globals:
;   TerminatedCString s_g_mm_006169d8
;   undefined4 g_CLightActorClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   crt_stdio.c_sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00423400
        ;   Label: core_boxactor.cpp_CLightActor_FUN_00423400
    MOV EDX,dword ptr [0x00822c84]      ; 00423401 | g_CLightActorClassInfo.name_hash
    PUSH EDX                            ; 00423407
    MOV ECX,dword ptr [ESP + 0xc]       ; 00423408
    PUSH ECX                            ; 0042340c
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0042340d
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00423412
    SUB ESP,0x8                         ; 00423415
    FLD float ptr [EAX + 0x6a8]         ; 00423418
    FSTP double ptr [ESP]               ; 0042341e
    PUSH 0x6169d8                       ; 00423421 | = "%g mm"
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00423426
    PUSH EBX                            ; 0042342a
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0042342b
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 00423430
    POP EBX                             ; 00423433
    RET                                 ; 00423434

