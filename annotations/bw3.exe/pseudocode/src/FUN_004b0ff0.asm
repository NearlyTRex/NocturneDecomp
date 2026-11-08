; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b0ff0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_0047ee50 at 0047ef4c
;   FUN_004e80f0 at 004e82ce
;
; Called Functions:
;   FUN_004b1040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0ff0
        ;   Label: FUN_004b0ff0
    PUSH ESI                            ; 004b0ff1
    PUSH EDI                            ; 004b0ff2
    PUSH EBP                            ; 004b0ff3
    SUB ESP,0x4                         ; 004b0ff4
    LEA EAX,[ESP + 0x34]                ; 004b0ff7
    MOV dword ptr [ESP],EAX             ; 004b0ffb
    MOV EAX,ESP                         ; 004b0ffe
    PUSH EAX                            ; 004b1000
    MOV EDX,dword ptr [ESP + 0x34]      ; 004b1001
    PUSH EDX                            ; 004b1005
    MOV ECX,dword ptr [ESP + 0x34]      ; 004b1006
    PUSH ECX                            ; 004b100a
    MOV EBX,dword ptr [ESP + 0x34]      ; 004b100b
    PUSH EBX                            ; 004b100f
    MOV ESI,dword ptr [ESP + 0x34]      ; 004b1010
    PUSH ESI                            ; 004b1014
    MOV EDI,dword ptr [ESP + 0x34]      ; 004b1015
    PUSH EDI                            ; 004b1019
    MOV EBP,dword ptr [ESP + 0x34]      ; 004b101a
    PUSH EBP                            ; 004b101e
    MOV EAX,dword ptr [ESP + 0x34]      ; 004b101f
    PUSH EAX                            ; 004b1023
    CALL FUN_004b1040                   ; 004b1024
        ;   XREF to: 004b1040 (UNCONDITIONAL_CALL)  ; undefined FUN_004b1040()
    ADD ESP,0x20                        ; 004b1029
    XOR EDX,EDX                         ; 004b102c
    MOV dword ptr [ESP],EDX             ; 004b102e
    ADD ESP,0x4                         ; 004b1031
    POP EBP                             ; 004b1034
    POP EDI                             ; 004b1035
    POP ESI                             ; 004b1036
    POP EBX                             ; 004b1037
    RET                                 ; 004b1038

