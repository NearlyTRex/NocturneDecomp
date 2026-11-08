; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042b8d0(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_0051e690 at 0051e6b6
;
; Referenced Globals:
;   undefined4 DAT_005dd234
;
; Called Functions:
;   FUN_00409d00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042b8d0
        ;   Label: FUN_0042b8d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0042b8d1
    PUSH EBX                            ; 0042b8d5
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042b8d6
    CALL dword ptr [EAX + 0xf8]         ; 0042b8dc
    ADD ESP,0x4                         ; 0042b8e2
    MOV EDX,dword ptr [ESP + 0x10]      ; 0042b8e5
    PUSH EDX                            ; 0042b8e9
    MOV ECX,dword ptr [ESP + 0x10]      ; 0042b8ea
    PUSH ECX                            ; 0042b8ee
    PUSH EBX                            ; 0042b8ef
    CALL FUN_00409d00                   ; 0042b8f0
        ;   XREF to: 00409d00 (UNCONDITIONAL_CALL)  ; undefined FUN_00409d00()
    LEA EAX,[EBX + 0x2518]              ; 0042b8f5
    FLD float ptr [0x005dd234]          ; 0042b8fb | DAT_005dd234
    MOV dword ptr [EAX + 0x8],0x0       ; 0042b901
    ADD ESP,0xc                         ; 0042b908
    MOV EDX,dword ptr [EAX + 0x8]       ; 0042b90b
    MOV dword ptr [EAX + 0x4],EDX       ; 0042b90e
    MOV EDX,dword ptr [EAX + 0x4]       ; 0042b911
    MOV dword ptr [EAX],EDX             ; 0042b914
    FSTP float ptr [EBX + 0x2504]       ; 0042b916
    POP EBX                             ; 0042b91c
    RET                                 ; 0042b91d

