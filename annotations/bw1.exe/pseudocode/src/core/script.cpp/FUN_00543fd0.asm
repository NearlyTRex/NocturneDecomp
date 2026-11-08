; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00543fd0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00543e00 at 00543f2d
;
; Referenced Globals:
;   TerminatedCString s_core_script_cpp_005ee22b
;   TerminatedCString s_Out_of_memory_loading_sc_005ee23e
;   TerminatedCString s_core_script_cpp_005ee266
;   TerminatedCString s_Out_of_memory_loading_sc_005ee279
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01e808a8
;   undefined4 DAT_01e808a9
;   undefined4 DAT_01e808aa
;   undefined4 DAT_01e808ab
;
; Called Functions:
;   FUN_004998a0
;   FUN_0049df50
;   FUN_005030e0
;   FUN_005431a0
;   FUN_00543790
;   FUN_005c08d0
;   FUN_005c10d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00543fd0
        ;   Label: FUN_00543fd0
    PUSH ESI                            ; 00543fd1
    PUSH EDI                            ; 00543fd2
    PUSH EBP                            ; 00543fd3
    SUB ESP,0x4                         ; 00543fd4
    MOV EBX,dword ptr [ESP + 0x18]      ; 00543fd7
    PUSH EBX                            ; 00543fdb
    CALL FUN_00543790                   ; 00543fdc
        ;   XREF to: 00543790 (UNCONDITIONAL_CALL)  ; undefined FUN_00543790()
    ADD ESP,0x4                         ; 00543fe1
    LEA EAX,[EBX + 0x34]                ; 00543fe4
    XOR EBP,EBP                         ; 00543fe7
    MOV dword ptr [ESP],EAX             ; 00543fe9
    MOV EDX,dword ptr [ESP]             ; 00543fec
        ;   Label: LAB_00543fec
    PUSH EDX                            ; 00543fef
    CALL FUN_0049df50                   ; 00543ff0
        ;   XREF to: 0049df50 (UNCONDITIONAL_CALL)  ; undefined FUN_0049df50()
    ADD ESP,0x4                         ; 00543ff5
    CMP EBP,EAX                         ; 00543ff8
    JL 0x00544004                       ; 00543ffa
        ;   XREF to: 00544004 (CONDITIONAL_JUMP)  ; LAB_00544004
    ADD ESP,0x4                         ; 00543ffc
    POP EBP                             ; 00543fff
    POP EDI                             ; 00544000
    POP ESI                             ; 00544001
    POP EBX                             ; 00544002
    RET                                 ; 00544003
    PUSH 0x1e808a8                      ; 00544004 | DAT_01e808a8
        ;   Label: LAB_00544004
    PUSH EBP                            ; 00544009
    MOV ECX,dword ptr [ESP + 0x8]       ; 0054400a
    PUSH ECX                            ; 0054400e
    CALL FUN_004998a0                   ; 0054400f
        ;   XREF to: 004998a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004998a0()
    ADD ESP,0x8                         ; 00544014
    PUSH EAX                            ; 00544017
    CALL FUN_005431a0                   ; 00544018
        ;   XREF to: 005431a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005431a0()
    MOV AH,byte ptr [0x01e808a8]        ; 0054401d | DAT_01e808a8
    ADD ESP,0x8                         ; 00544023
    TEST AH,AH                          ; 00544026
    JZ 0x005440f4                       ; 00544028
        ;   XREF to: 005440f4 (CONDITIONAL_JUMP)  ; LAB_005440f4
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0054402e
    INC EAX                             ; 00544031
    SHL EAX,0x3                         ; 00544032
    PUSH EAX                            ; 00544035
    MOV ESI,dword ptr [EBX + 0x30]      ; 00544036
    PUSH ESI                            ; 00544039
    CALL FUN_005c10d0                   ; 0054403a
        ;   XREF to: 005c10d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c10d0()
    ADD ESP,0x8                         ; 0054403f
    MOV dword ptr [EBX + 0x30],EAX      ; 00544042
    TEST EAX,EAX                        ; 00544045
    JNZ 0x0054406f                      ; 00544047
        ;   XREF to: 0054406f (CONDITIONAL_JUMP)  ; LAB_0054406f
    MOV dword ptr [0x01d1d400],0x5ee22b ; 00544049 | DAT_01d1d400 | = "..\\core\\script.cpp"
    LEA EAX,[EBP + 0x1]                 ; 00544053
    PUSH EAX                            ; 00544056
    MOV EDX,0x3a3                       ; 00544057
    PUSH 0x5ee23e                       ; 0054405c | = "Out of memory loading script at line %d"
    MOV dword ptr [0x01d1d404],EDX      ; 00544061 | DAT_01d1d404
    CALL FUN_005030e0                   ; 00544067
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 0054406c
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0054406f
        ;   Label: LAB_0054406f
    MOV ECX,dword ptr [EBX + 0x30]      ; 00544072
    LEA ESI,[EBP + 0x1]                 ; 00544075
    MOV EDI,0x1e808a8                   ; 00544078
    MOV dword ptr [ECX + EAX*0x8],ESI   ; 0054407d
    SUB ECX,ECX                         ; 00544080
    DEC ECX                             ; 00544082
    XOR EAX,EAX                         ; 00544083
    SCASB.REPNE ES:EDI                  ; 00544085 | DAT_01e808a8 | DAT_01e808a9
    NOT ECX                             ; 00544087
    DEC ECX                             ; 00544089
    INC ECX                             ; 0054408a
    PUSH ECX                            ; 0054408b
    CALL FUN_005c08d0                   ; 0054408c
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c08d0()
    MOV ECX,dword ptr [EBX + 0x2c]      ; 00544091
    MOV EDI,dword ptr [EBX + 0x30]      ; 00544094
    MOV dword ptr [EDI + ECX*0x8 + 0x4],EAX ; 00544097
    MOV ECX,dword ptr [EBX + 0x30]      ; 0054409b
    ADD ESP,0x4                         ; 0054409e
    TEST ECX,ECX                        ; 005440a1
    JNZ 0x005440c8                      ; 005440a3
        ;   XREF to: 005440c8 (CONDITIONAL_JUMP)  ; LAB_005440c8
    PUSH ESI                            ; 005440a5
    MOV EDI,0x5ee266                    ; 005440a6 | = "..\\core\\script.cpp"
    MOV EAX,0x3a6                       ; 005440ab
    PUSH 0x5ee279                       ; 005440b0 | = "Out of memory loading script at line %d"
    MOV dword ptr [0x01d1d400],EDI      ; 005440b5 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 005440bb | DAT_01d1d404
    CALL FUN_005030e0                   ; 005440c0
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 005440c5
    MOV EDI,dword ptr [EBX + 0x2c]      ; 005440c8
        ;   Label: LAB_005440c8
    MOV EAX,dword ptr [EBX + 0x30]      ; 005440cb
    MOV ESI,0x1e808a8                   ; 005440ce
    MOV EDI,dword ptr [EAX + EDI*0x8 + 0x4] ; 005440d3
    PUSH EDI                            ; 005440d7
    MOV AL,byte ptr [ESI]               ; 005440d8 | DAT_01e808a8 | DAT_01e808aa
        ;   Label: LAB_005440d8
    MOV byte ptr [EDI],AL               ; 005440da
    CMP AL,0x0                          ; 005440dc
    JZ 0x005440f0                       ; 005440de
        ;   XREF to: 005440f0 (CONDITIONAL_JUMP)  ; LAB_005440f0
    MOV AL,byte ptr [ESI + 0x1]         ; 005440e0 | DAT_01e808a9 | DAT_01e808ab
    ADD ESI,0x2                         ; 005440e3
    MOV byte ptr [EDI + 0x1],AL         ; 005440e6
    ADD EDI,0x2                         ; 005440e9
    CMP AL,0x0                          ; 005440ec
    JNZ 0x005440d8                      ; 005440ee
        ;   XREF to: 005440d8 (CONDITIONAL_JUMP)  ; LAB_005440d8
    POP EDI                             ; 005440f0
        ;   Label: LAB_005440f0
    INC dword ptr [EBX + 0x2c]          ; 005440f1
    INC EBP                             ; 005440f4
        ;   Label: LAB_005440f4
    JMP 0x00543fec                      ; 005440f5
        ;   XREF to: 00543fec (UNCONDITIONAL_JUMP)  ; LAB_00543fec

