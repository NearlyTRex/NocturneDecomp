; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00521300(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_006040a8
;   undefined4 DAT_006040ac
;
; Called Functions:
;   FUN_0042c080
;   FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00521300
        ;   Label: FUN_00521300
    MOV EDX,dword ptr [ESP + 0x8]       ; 00521301
    PUSH EDX                            ; 00521305
    CALL FUN_0042c080                   ; 00521306
        ;   XREF to: 0042c080 (UNCONDITIONAL_CALL)  ; undefined FUN_0042c080()
    ADD ESP,0x4                         ; 0052130b
    PUSH 0x5ea332                       ; 0052130e
    MOV EBX,EAX                         ; 00521313
    ADD EAX,0x158                       ; 00521315
    PUSH EAX                            ; 0052131a
    MOV dword ptr [EAX + -0x4],0x6040b4 ; 0052131b
    CALL FUN_00569f50                   ; 00521322
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f50()
    MOV dword ptr [EBX + 0x2fec],0x3fe00000 ; 00521327
    FLD float ptr [0x006040a8]          ; 00521331 | DAT_006040a8
    MOV dword ptr [EBX + 0x2ff0],0x40600000 ; 00521337
    FLD float ptr [0x006040ac]          ; 00521341 | DAT_006040ac
    MOV dword ptr [EBX + 0xc1d8],0x0    ; 00521347
    ADD ESP,0x8                         ; 00521351
    MOV dword ptr [EBX + 0x252c],0x3f490fdb ; 00521354
    MOV EAX,EBX                         ; 0052135e
    FXCH                                ; 00521360
    FSTP float ptr [EBX + 0x2ff4]       ; 00521362
    FSTP float ptr [EBX + 0x2ff8]       ; 00521368
    POP EBX                             ; 0052136e
    RET                                 ; 0052136f

