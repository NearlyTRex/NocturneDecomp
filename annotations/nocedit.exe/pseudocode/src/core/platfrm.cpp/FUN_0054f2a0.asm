; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_platfrm_cpp_FUN_0054f2a0 (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4, int param_5,FILE *param_6)
;
;
; XREF[1]:
;   core_conveyor.cpp_FUN_004422f0 at 004422fa
;
; Referenced Globals:
;   TerminatedCString s_data_s_00640155
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054f2a0
        ;   Label: core_platfrm.cpp_FUN_0054f2a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054f2a1
    MOV EDX,dword ptr [ESP + 0xc]       ; 0054f2a5
    PUSH EDX                            ; 0054f2a9
    LEA EAX,[EBX + 0x158]               ; 0054f2aa
    PUSH EAX                            ; 0054f2b0
    CALL core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0 ; 0054f2b1
        ;   XREF to: 0047edd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0(CKeyFramedModelInstance * this_ptr, FILE * file_handle)
    MOV AH,byte ptr [EBX + 0x2f0]       ; 0054f2b6
    ADD ESP,0x8                         ; 0054f2bc
    TEST AH,AH                          ; 0054f2bf
    JNZ 0x0054f2c5                      ; 0054f2c1
        ;   XREF to: 0054f2c5 (CONDITIONAL_JUMP)  ; LAB_0054f2c5
    POP EBX                             ; 0054f2c3
    RET                                 ; 0054f2c4
    LEA EAX,[EBX + 0x2f0]               ; 0054f2c5
        ;   Label: LAB_0054f2c5
    PUSH EAX                            ; 0054f2cb
    PUSH 0x640155                       ; 0054f2cc | = "data\\%s\n"
    MOV ECX,dword ptr [ESP + 0x14]      ; 0054f2d1
    PUSH ECX                            ; 0054f2d5
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0054f2d6
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 0054f2db
    POP EBX                             ; 0054f2de
    RET                                 ; 0054f2df

