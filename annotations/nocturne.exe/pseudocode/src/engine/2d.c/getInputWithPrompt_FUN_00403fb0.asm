; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint engine_2d_c_getInputWithPrompt_FUN_00403fb0(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
; Local Variables:
; undefined        Stack[-0x114]:1  local_114
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   string s_%s%s__00577361
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_00563c90
;   engine_2d.c_clearInputAndWait_FUN_00403f50
;   engine_2d.c_drawText_FUN_00402600
;   wincore_wddvmem.cpp_swapBuffers_FUN_00553910
;   wincore_winrun.cpp_getNextKeypress_FUN_00558b00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403fb0
        ;   Label: engine_2d.c_getInputWithPrompt_FUN_00403fb0
    PUSH ESI                            ; 00403fb1
    PUSH EDI                            ; 00403fb2
    PUSH EBP                            ; 00403fb3
    SUB ESP,0x104                       ; 00403fb4
    MOV ESI,dword ptr [ESP + 0x118]     ; 00403fba
    MOV EBP,dword ptr [ESP + 0x120]     ; 00403fc1
    MOV EDI,dword ptr [ESP + 0x124]     ; 00403fc8
    MOV byte ptr [ESI],0x0              ; 00403fcf
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 00403fd2
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_clearInputAndWait_FUN_00403f50()
    XOR EBX,EBX                         ; 00403fd7
    PUSH ESI                            ; 00403fd9
        ;   Label: LAB_00403fd9
    MOV EDX,dword ptr [ESP + 0x12c]     ; 00403fda
    PUSH EDX                            ; 00403fe1
    PUSH 0x577361                       ; 00403fe2 | = "%s%s_    "
    LEA EAX,[ESP + 0xc]                 ; 00403fe7
    PUSH EAX                            ; 00403feb
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00403fec
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 00403ff1
    PUSH EDI                            ; 00403ff4
    PUSH EBP                            ; 00403ff5
    LEA EAX,[ESP + 0x8]                 ; 00403ff6
    PUSH EAX                            ; 00403ffa
    CALL engine_2d.c_drawText_FUN_00402600 ; 00403ffb
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_drawText_FUN_00402600()
    ADD ESP,0xc                         ; 00404000
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 00404003
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_00558b00 ; 00404008
        ;   XREF to: 00558b00 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getNextKeypress_FUN_00558b00()
    AND EAX,0xff                        ; 0040400d
    MOV dword ptr [ESP + 0x100],EAX     ; 00404012
    CMP EAX,0xd                         ; 00404019
    JZ 0x0040406b                       ; 0040401c
        ;   XREF to: 0040406b (CONDITIONAL_JUMP)  ; LAB_0040406b
    CMP EAX,0x1b                        ; 0040401e
    JZ 0x00404068                       ; 00404021
        ;   XREF to: 00404068 (CONDITIONAL_JUMP)  ; LAB_00404068
    CMP EAX,0x8                         ; 00404023
    JNZ 0x00404033                      ; 00404026
        ;   XREF to: 00404033 (CONDITIONAL_JUMP)  ; LAB_00404033
    TEST EBX,EBX                        ; 00404028
    JLE 0x00404033                      ; 0040402a
        ;   XREF to: 00404033 (CONDITIONAL_JUMP)  ; LAB_00404033
    DEC EBX                             ; 0040402c
    LEA EAX,[ESI + EBX*0x1]             ; 0040402d
    MOV byte ptr [EAX],0x0              ; 00404030
    MOV ECX,dword ptr [ESP + 0x100]     ; 00404033
        ;   Label: LAB_00404033
    CMP ECX,0x1f                        ; 0040403a
    JLE 0x00403fd9                      ; 0040403d
        ;   XREF to: 00403fd9 (CONDITIONAL_JUMP)  ; LAB_00403fd9
    CMP ECX,0x80                        ; 0040403f
    JGE 0x00403fd9                      ; 00404045
        ;   XREF to: 00403fd9 (CONDITIONAL_JUMP)  ; LAB_00403fd9
    CMP EBX,dword ptr [ESP + 0x11c]     ; 00404047
    JGE 0x00403fd9                      ; 0040404e
        ;   XREF to: 00403fd9 (CONDITIONAL_JUMP)  ; LAB_00403fd9
    LEA EAX,[ESI + EBX*0x1]             ; 00404050
    MOV DL,byte ptr [ESP + 0x100]       ; 00404053
    INC EBX                             ; 0040405a
    MOV byte ptr [EAX],DL               ; 0040405b
    LEA EAX,[ESI + EBX*0x1]             ; 0040405d
    MOV byte ptr [EAX],0x0              ; 00404060
    JMP 0x00403fd9                      ; 00404063
        ;   XREF to: 00403fd9 (UNCONDITIONAL_JUMP)  ; LAB_00403fd9
    MOV byte ptr [ESI],0x0              ; 00404068
        ;   Label: LAB_00404068
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 0040406b
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
        ;   Label: LAB_0040406b
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 00404070
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_clearInputAndWait_FUN_00403f50()
    MOV EAX,dword ptr [ESP + 0x100]     ; 00404075
    ADD ESP,0x104                       ; 0040407c
    POP EBP                             ; 00404082
    POP EDI                             ; 00404083
    POP ESI                             ; 00404084
    POP EBX                             ; 00404085
    RET                                 ; 00404086

