; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CIniFile * __cdecl engine_ini_cpp_CIniFile_dtor_FUN_004f4b30(CIniFile *this_ptr,uint flags)
;
; Parameters:
; CIniFile *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[5]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004d27b0 at 004d54d1
;   core_game.cpp_FUN_004d7250 at 004d7591
;   core_inivar.cpp_readIniData_FUN_004f4f50 at 004f5726
;   core_inivar.cpp_writeIniData_FUN_004f5760 at 004f5ed4
;   core_script.cpp_CScript_step_FUN_00544460 at 005475fa
;
; Referenced Globals:
;   WatcomTypeInfo g_CIniFileTypeInfo
;   void* PTR_engine_ini.cpp_CIniFile_dtor_FUN_004f4b30_00602964 = 004f4b30
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4b30
        ;   Label: engine_ini.cpp_CIniFile_dtor_FUN_004f4b30
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f4b31
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f4b35
    TEST AL,0x4                         ; 004f4b39
    JNZ 0x004f4b4f                      ; 004f4b3b
        ;   XREF to: 004f4b4f (CONDITIONAL_JUMP)  ; LAB_004f4b4f
    MOV dword ptr [EBX + 0x200],0x602964 ; 004f4b3d | PTR_engine_ini.cpp_CIniFile_dtor_FUN_004f4b30_00602964
    TEST AL,0x2                         ; 004f4b47
    JNZ 0x004f4b6a                      ; 004f4b49
        ;   XREF to: 004f4b6a (CONDITIONAL_JUMP)  ; LAB_004f4b6a
    MOV EAX,EBX                         ; 004f4b4b
    POP EBX                             ; 004f4b4d
    RET                                 ; 004f4b4e
    PUSH 0x600fc0                       ; 004f4b4f | g_CIniFileTypeInfo
        ;   Label: LAB_004f4b4f
    PUSH EBX                            ; 004f4b54
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 004f4b55
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004f4b5a
    PUSH EAX                            ; 004f4b5d
    CALL crt_unknown.c_FUN_005c0336     ; 004f4b5e
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004f4b63
    MOV EAX,EBX                         ; 004f4b66
    POP EBX                             ; 004f4b68
    RET                                 ; 004f4b69
    PUSH EBX                            ; 004f4b6a
        ;   Label: LAB_004f4b6a
    CALL crt_unknown.c_FUN_005c0344     ; 004f4b6b
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 004f4b70
    MOV EAX,EBX                         ; 004f4b73
    POP EBX                             ; 004f4b75
    RET                                 ; 004f4b76

