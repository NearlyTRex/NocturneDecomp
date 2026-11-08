; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004390e0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f49ac
;   undefined4 DAT_005f49b0
;
; Called Functions:
;   FUN_00487db0
;   FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004390e0
        ;   Label: FUN_004390e0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004390e1
    PUSH EDX                            ; 004390e5
    CALL FUN_00487db0                   ; 004390e6
        ;   XREF to: 00487db0 (UNCONDITIONAL_CALL)  ; undefined FUN_00487db0()
    ADD ESP,0x4                         ; 004390eb
    PUSH 0x5ce08d                       ; 004390ee
    MOV EBX,EAX                         ; 004390f3
    ADD EAX,0x2b4                       ; 004390f5
    PUSH EAX                            ; 004390fa
    MOV dword ptr [EAX + -0x4],0x5f49c4 ; 004390fb
    CALL FUN_005478b0                   ; 00439102
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005478b0()
    MOV dword ptr [EBX + 0x3430],0x3fe00000 ; 00439107
    FLD float ptr [0x005f49ac]          ; 00439111 | DAT_005f49ac
    MOV dword ptr [EBX + 0x3434],0x40600000 ; 00439117
    FLD float ptr [0x005f49b0]          ; 00439121 | DAT_005f49b0
    MOV dword ptr [EBX + 0x10b00],0x0   ; 00439127
    ADD ESP,0x8                         ; 00439131
    MOV dword ptr [EBX + 0x259c],0x3f490fdb ; 00439134
    MOV EAX,EBX                         ; 0043913e
    FXCH                                ; 00439140
    FSTP float ptr [EBX + 0x3438]       ; 00439142
    FSTP float ptr [EBX + 0x343c]       ; 00439148
    POP EBX                             ; 0043914e
    RET                                 ; 0043914f

