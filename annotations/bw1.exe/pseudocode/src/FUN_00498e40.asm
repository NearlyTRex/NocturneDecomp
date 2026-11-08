; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00498e40(undefined4 param_1,char *param_2)
;
; Local Variables:
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined2       Stack[-0x24]:2  local_24
; undefined4       Stack[-0x22]:4  local_22
; undefined4       Stack[-0x1e]:4  local_1e
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[3]:
;   FUN_004ce580 at 004ceeee
;   FUN_004cf5e0 at 004cf680
;   FUN_005031c0 at 00503260
;
; Referenced Globals:
;   void* switchdataD_00498e20 = 00498e7c
;   undefined4 s_Blocks_d_Total_1fk_Max_1_005dc293+1
;   TerminatedCString s_Heap_is_empty_005dc2b7
;   undefined4 s_Heap_is_empty_005dc2b7+1
;   undefined4 s_Heap_is_empty_005dc2b7+2
;   undefined4 s_Heap_is_empty_005dc2b7+3
;   TerminatedCString s_Memory_corruption_detect_005dc2c6
;   undefined4 s_Memory_corruption_detect_005dc2c6+1
;   undefined4 DAT_005dc2e8
;
; Called Functions:
;   FUN_005bfb40
;   FUN_005c2ce0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00498e40
        ;   Label: FUN_00498e40
    PUSH ESI                            ; 00498e41
    PUSH EDI                            ; 00498e42
    PUSH EBP                            ; 00498e43
    MOV EBP,ESP                         ; 00498e44
    SUB ESP,0x14                        ; 00498e46
    AND ESP,0xfffffff8                  ; 00498e49
    XOR EDX,EDX                         ; 00498e4c
    XOR EBX,EBX                         ; 00498e4e
    XOR EDI,EDI                         ; 00498e50
    XOR ESI,ESI                         ; 00498e52
    MOV word ptr [ESP + 0x4],DX         ; 00498e54
    MOV dword ptr [ESP],EBX             ; 00498e59
    MOV EAX,ESP                         ; 00498e5c
        ;   Label: LAB_00498e5c
    PUSH EAX                            ; 00498e5e
    CALL FUN_005c2ce0                   ; 00498e5f
        ;   XREF to: 005c2ce0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c2ce0()
    ADD ESP,0x4                         ; 00498e64
    TEST EAX,EAX                        ; 00498e67
    JZ 0x00498ea5                       ; 00498e69
        ;   XREF to: 00498ea5 (CONDITIONAL_JUMP)  ; LAB_00498ea5
    DEC EAX                             ; 00498e6b
    CMP EAX,0x4                         ; 00498e6c
    JA 0x00498f00                       ; 00498e6f
        ;   XREF to: 00498f00 (CONDITIONAL_JUMP)  ; caseD_5
    JMP dword ptr [EAX*0x4 + 0x498e20]  ; 00498e75 | caseD_1 | caseD_5 | caseD_4
        ;   Label: switchD
    MOV ESI,0x5dc2b7                    ; 00498e7c | = "Heap is empty."
        ;   Label: caseD_1
    MOV EDI,dword ptr [EBP + 0x18]      ; 00498e81
        ;   Label: LAB_00498e81
    PUSH EDI                            ; 00498e84
    MOV AL,byte ptr [ESI]               ; 00498e85 | = "Heap is empty." | s_Heap_is_empty_005dc2b7+2 | s_Memory_corruption_detect_005dc2c6
        ;   Label: LAB_00498e85
    MOV byte ptr [EDI],AL               ; 00498e87
    CMP AL,0x0                          ; 00498e89
    JZ 0x00498e9d                       ; 00498e8b
        ;   XREF to: 00498e9d (CONDITIONAL_JUMP)  ; LAB_00498e9d
    MOV AL,byte ptr [ESI + 0x1]         ; 00498e8d | s_Heap_is_empty_005dc2b7+1 | s_Heap_is_empty_005dc2b7+3 | s_Memory_corruption_detect_005dc2c6+1
    ADD ESI,0x2                         ; 00498e90
    MOV byte ptr [EDI + 0x1],AL         ; 00498e93
    ADD EDI,0x2                         ; 00498e96
    CMP AL,0x0                          ; 00498e99
    JNZ 0x00498e85                      ; 00498e9b
        ;   XREF to: 00498e85 (CONDITIONAL_JUMP)  ; LAB_00498e85
    POP EDI                             ; 00498e9d
        ;   Label: LAB_00498e9d
    MOV ESP,EBP                         ; 00498e9e
    POP EBP                             ; 00498ea0
    POP EDI                             ; 00498ea1
    POP ESI                             ; 00498ea2
    POP EBX                             ; 00498ea3
    RET                                 ; 00498ea4
    CMP dword ptr [ESP + 0xa],0x0       ; 00498ea5
        ;   Label: LAB_00498ea5
    JNZ 0x00498e5c                      ; 00498eaa
        ;   XREF to: 00498e5c (CONDITIONAL_JUMP)  ; LAB_00498e5c
    MOV EAX,dword ptr [ESP + 0x6]       ; 00498eac
    INC EBX                             ; 00498eb0
    ADD EDI,EAX                         ; 00498eb1
    CMP ESI,EAX                         ; 00498eb3
    JNC 0x00498e5c                      ; 00498eb5
        ;   XREF to: 00498e5c (CONDITIONAL_JUMP)  ; LAB_00498e5c
    MOV ESI,EAX                         ; 00498eb7
    JMP 0x00498e5c                      ; 00498eb9
        ;   XREF to: 00498e5c (UNCONDITIONAL_JUMP)  ; LAB_00498e5c
    TEST EBX,EBX                        ; 00498ebb
        ;   Label: caseD_4
    JLE 0x00498e7c                      ; 00498ebd
        ;   XREF to: 00498e7c (CONDITIONAL_JUMP)  ; caseD_1
    MOV dword ptr [ESP + 0x10],ESI      ; 00498ebf
    FILD dword ptr [ESP + 0x10]         ; 00498ec3
    SUB ESP,0x8                         ; 00498ec7
    MOV dword ptr [ESP + 0x18],EDI      ; 00498eca
    FLD double ptr [0x005dc2e8]         ; 00498ece | DAT_005dc2e8
    FXCH                                ; 00498ed4
    FMUL ST1                            ; 00498ed6
    FILD dword ptr [ESP + 0x18]         ; 00498ed8
    FMULP ST2                           ; 00498edc
    FSTP double ptr [ESP]               ; 00498ede
    SUB ESP,0x8                         ; 00498ee1
    FSTP double ptr [ESP]               ; 00498ee4
    PUSH EBX                            ; 00498ee7
    PUSH 0x5dc294                       ; 00498ee8 | s_Blocks_d_Total_1fk_Max_1_005dc293+1
    MOV ECX,dword ptr [EBP + 0x18]      ; 00498eed
    PUSH ECX                            ; 00498ef0
    CALL FUN_005bfb40                   ; 00498ef1
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x1c                        ; 00498ef6
    MOV ESP,EBP                         ; 00498ef9
    POP EBP                             ; 00498efb
    POP EDI                             ; 00498efc
    POP ESI                             ; 00498efd
    POP EBX                             ; 00498efe
    RET                                 ; 00498eff
    MOV ESI,0x5dc2c6                    ; 00498f00 | = "Memory corruption detected!"
        ;   Label: caseD_2
    JMP 0x00498e81                      ; 00498f05
        ;   XREF to: 00498e81 (UNCONDITIONAL_JUMP)  ; LAB_00498e81

