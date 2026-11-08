; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004f0310(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f9e7c
;   undefined4 DAT_005f9e80
;
; Called Functions:
;   FUN_00487db0
;   FUN_005adda0
;   FUN_005b6e60
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004f0310
        ;   Label: FUN_004f0310
    PUSH EDI                            ; 004f0311
    MOV EDX,dword ptr [ESP + 0xc]       ; 004f0312
    PUSH EDX                            ; 004f0316
    CALL FUN_00487db0                   ; 004f0317
        ;   XREF to: 00487db0 (UNCONDITIONAL_CALL)  ; undefined FUN_00487db0()
    ADD ESP,0x4                         ; 004f031c
    ADD EAX,0x10bc0                     ; 004f031f
    PUSH EAX                            ; 004f0324
    CALL FUN_005adda0                   ; 004f0325
        ;   XREF to: 005adda0 (UNCONDITIONAL_CALL)  ; undefined FUN_005adda0()
    ADD ESP,0x4                         ; 004f032a
    ADD EAX,0x3ab60                     ; 004f032d
    PUSH EAX                            ; 004f0332
    CALL FUN_005b6e60                   ; 004f0333
        ;   XREF to: 005b6e60 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6e60()
    LEA EDX,[EAX + 0xfffb48e0]          ; 004f0338
    MOV dword ptr [EDX + 0x2b0],0x5f9e94 ; 004f033e
    MOV dword ptr [EDX + 0x3430],0x3f000000 ; 004f0348
    MOV ESI,0x5dd748                    ; 004f0352
    MOV dword ptr [EDX + 0x3434],0x3f800000 ; 004f0357
    FLD float ptr [0x005f9e7c]          ; 004f0361 | DAT_005f9e7c
    MOV byte ptr [EDX + 0x10af8],0x0    ; 004f0367
    FLD float ptr [0x005f9e80]          ; 004f036e | DAT_005f9e80
    MOV byte ptr [EDX + 0x10b5c],0x0    ; 004f0374
    ADD ESP,0x4                         ; 004f037b
    FXCH                                ; 004f037e
    FSTP float ptr [EDX + 0x3438]       ; 004f0380
    FSTP float ptr [EDX + 0x343c]       ; 004f0386
    MOV dword ptr [EDX + 0x4b6f0],0x0   ; 004f038c
    LEA EDI,[EDX + 0x4b6f8]             ; 004f0396
    MOV dword ptr [EDX + 0x4b6f4],0x0   ; 004f039c
    PUSH EDI                            ; 004f03a6
    MOV AL,byte ptr [ESI]               ; 004f03a7
        ;   Label: LAB_004f03a7
    MOV byte ptr [EDI],AL               ; 004f03a9
    CMP AL,0x0                          ; 004f03ab
    JZ 0x004f03bf                       ; 004f03ad
        ;   XREF to: 004f03bf (CONDITIONAL_JUMP)  ; LAB_004f03bf
    MOV AL,byte ptr [ESI + 0x1]         ; 004f03af
    ADD ESI,0x2                         ; 004f03b2
    MOV byte ptr [EDI + 0x1],AL         ; 004f03b5
    ADD EDI,0x2                         ; 004f03b8
    CMP AL,0x0                          ; 004f03bb
    JNZ 0x004f03a7                      ; 004f03bd
        ;   XREF to: 004f03a7 (CONDITIONAL_JUMP)  ; LAB_004f03a7
    POP EDI                             ; 004f03bf
        ;   Label: LAB_004f03bf
    MOV dword ptr [EDX + 0x4c350],0x0   ; 004f03c0
    MOV dword ptr [EDX + 0x4c34c],0xbf800000 ; 004f03ca
    MOV dword ptr [EDX + 0x108],0x10000 ; 004f03d4
    MOV dword ptr [EDX + 0x10c],0x10000 ; 004f03de
    MOV EAX,EDX                         ; 004f03e8
    MOV dword ptr [EDX + 0x110],0x10000 ; 004f03ea
    POP EDI                             ; 004f03f4
    POP ESI                             ; 004f03f5
    RET                                 ; 004f03f6

