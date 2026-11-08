; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004a8490(undefined4 param_1,char *param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_004a91b0 at 004a91d8
;
; Referenced Globals:
;   void* PTR_FUN_005e0294 = 004a8510
;
; Called Functions:
;   FUN_004a8370
;   FUN_004b2a80
;   FUN_004b30f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8490
        ;   Label: FUN_004a8490
    PUSH ESI                            ; 004a8491
    PUSH EDI                            ; 004a8492
    MOV EDX,dword ptr [ESP + 0x10]      ; 004a8493
    PUSH EDX                            ; 004a8497
    CALL FUN_004a8370                   ; 004a8498
        ;   XREF to: 004a8370 (UNCONDITIONAL_CALL)  ; undefined FUN_004a8370()
    MOV EBX,EAX                         ; 004a849d
    ADD ESP,0x4                         ; 004a849f
    MOV dword ptr [EAX + 0x14],0x5e0294 ; 004a84a2 | PTR_FUN_005e0294
    MOV EAX,dword ptr [ESP + 0x18]      ; 004a84a9
    LEA EDX,[EBX + 0x1c]                ; 004a84ad
    MOV ESI,dword ptr [ESP + 0x14]      ; 004a84b0
    MOV EDI,EDX                         ; 004a84b4
    MOV dword ptr [EBX + 0x11c],EAX     ; 004a84b6
    PUSH EDI                            ; 004a84bc
    MOV AL,byte ptr [ESI]               ; 004a84bd
        ;   Label: LAB_004a84bd
    MOV byte ptr [EDI],AL               ; 004a84bf
    CMP AL,0x0                          ; 004a84c1
    JZ 0x004a84d5                       ; 004a84c3
        ;   XREF to: 004a84d5 (CONDITIONAL_JUMP)  ; LAB_004a84d5
    MOV AL,byte ptr [ESI + 0x1]         ; 004a84c5
    ADD ESI,0x2                         ; 004a84c8
    MOV byte ptr [EDI + 0x1],AL         ; 004a84cb
    ADD EDI,0x2                         ; 004a84ce
    CMP AL,0x0                          ; 004a84d1
    JNZ 0x004a84bd                      ; 004a84d3
        ;   XREF to: 004a84bd (CONDITIONAL_JUMP)  ; LAB_004a84bd
    POP EDI                             ; 004a84d5
        ;   Label: LAB_004a84d5
    PUSH EDX                            ; 004a84d6
    MOV ECX,dword ptr [EBX + 0x11c]     ; 004a84d7
    PUSH ECX                            ; 004a84dd
    MOV dword ptr [EBX + 0x18],0x0      ; 004a84de
    CALL FUN_004b2a80                   ; 004a84e5
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; undefined FUN_004b2a80()
    ADD ESP,0x8                         ; 004a84ea
    PUSH 0x6a                           ; 004a84ed
    MOV ESI,dword ptr [EBX + 0x11c]     ; 004a84ef
    PUSH ESI                            ; 004a84f5
    MOV dword ptr [EBX + 0x8],EAX       ; 004a84f6
    CALL FUN_004b30f0                   ; 004a84f9
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b30f0()
    ADD ESP,0x8                         ; 004a84fe
    MOV dword ptr [EBX + 0xc],EAX       ; 004a8501
    MOV EAX,EBX                         ; 004a8504
    POP EDI                             ; 004a8506
    POP ESI                             ; 004a8507
    POP EBX                             ; 004a8508
    RET                                 ; 004a8509

