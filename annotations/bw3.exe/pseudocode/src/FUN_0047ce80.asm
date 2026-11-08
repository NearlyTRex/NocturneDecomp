; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047ce80(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x408]:1  local_408
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[7]:
;   FUN_004bb100 at 004bb9e4
;   FUN_004bdfb0 at 004be41c
;   FUN_004e4400 at 004e44ad
;   FUN_004f7a20 at 004f7b79
;   FUN_005043b0 at 00504519
;   FUN_00505a30 at 00505d5d
;   FUN_00529a70 at 0052c0f6
;
; Referenced Globals:
;   TerminatedCString s_Message_005bce6f
;   undefined4 DAT_01c5bb04
;
; Called Functions:
;   FUN_0047c8e0
;   FUN_005a2898
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047ce80
        ;   Label: FUN_0047ce80
    SUB ESP,0x404                       ; 0047ce81
    LEA EAX,[ESP + 0x414]               ; 0047ce87
    MOV dword ptr [ESP + 0x400],EAX     ; 0047ce8e
    LEA EAX,[ESP + 0x400]               ; 0047ce95
    PUSH EAX                            ; 0047ce9c
    MOV EDX,dword ptr [ESP + 0x414]     ; 0047ce9d
    PUSH EDX                            ; 0047cea4
    LEA EAX,[ESP + 0x8]                 ; 0047cea5
    PUSH EAX                            ; 0047cea9
    CALL FUN_005a2898                   ; 0047ceaa
        ;   XREF to: 005a2898 (UNCONDITIONAL_CALL)  ; undefined FUN_005a2898()
    ADD ESP,0xc                         ; 0047ceaf
    MOV EBX,dword ptr [0x01c5bb04]      ; 0047ceb2 | DAT_01c5bb04
    PUSH EBX                            ; 0047ceb8
    LEA EAX,[ESP + 0x4]                 ; 0047ceb9
    PUSH EAX                            ; 0047cebd
    XOR ECX,ECX                         ; 0047cebe
    PUSH 0x5bce6f                       ; 0047cec0 | = "Message"
    MOV dword ptr [ESP + 0x40c],ECX     ; 0047cec5
    CALL FUN_0047c8e0                   ; 0047cecc
        ;   XREF to: 0047c8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047c8e0()
    ADD ESP,0xc                         ; 0047ced1
    ADD ESP,0x404                       ; 0047ced4
    POP EBX                             ; 0047ceda
    RET                                 ; 0047cedb

