; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0047b130(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fc5a0
;
; Called Functions:
;   FUN_004a3920
;   FUN_0057b880
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047b130
        ;   Label: FUN_0047b130
    MOV EBX,dword ptr [ESP + 0x8]       ; 0047b131
    PUSH EBX                            ; 0047b135
    CALL FUN_0057b880                   ; 0047b136
        ;   XREF to: 0057b880 (UNCONDITIONAL_CALL)  ; undefined FUN_0057b880()
    ADD ESP,0x4                         ; 0047b13b
    TEST EAX,EAX                        ; 0047b13e
    JNZ 0x0047b144                      ; 0047b140
        ;   XREF to: 0047b144 (CONDITIONAL_JUMP)  ; LAB_0047b144
    POP EBX                             ; 0047b142
    RET                                 ; 0047b143
    PUSH ESI                            ; 0047b144
        ;   Label: LAB_0047b144
    MOV EDX,dword ptr [EBX + 0x5a4]     ; 0047b145
    PUSH EDX                            ; 0047b14b
    LEA ESI,[EBX + 0x598]               ; 0047b14c
    PUSH dword ptr [EBX + 0x594]        ; 0047b152
    PUSH ESI                            ; 0047b158
    LEA EAX,[EBX + 0x30]                ; 0047b159
    PUSH EAX                            ; 0047b15c
    LEA EAX,[EBX + 0x20]                ; 0047b15d
    PUSH EAX                            ; 0047b160
    MOV ECX,dword ptr [0x005fc5a0]      ; 0047b161 | DAT_005fc5a0
    PUSH ECX                            ; 0047b167
    CALL FUN_004a3920                   ; 0047b168
        ;   XREF to: 004a3920 (UNCONDITIONAL_CALL)  ; undefined FUN_004a3920()
    MOV dword ptr [EBX + 0x5a4],0x0     ; 0047b16d
    MOV dword ptr [EBX + 0x594],0xbf800000 ; 0047b177
    MOV EAX,0x1                         ; 0047b181
    MOV dword ptr [ESI + 0x8],0x0       ; 0047b186
    ADD ESP,0x18                        ; 0047b18d
    MOV EDX,dword ptr [ESI + 0x8]       ; 0047b190
    MOV dword ptr [ESI + 0x4],EDX       ; 0047b193
    MOV EDX,dword ptr [ESI + 0x4]       ; 0047b196
    MOV dword ptr [ESI],EDX             ; 0047b199
    POP ESI                             ; 0047b19b
    POP EBX                             ; 0047b19c
    RET                                 ; 0047b19d

