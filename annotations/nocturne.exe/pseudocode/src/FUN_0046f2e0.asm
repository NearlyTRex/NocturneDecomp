; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046f2e0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   FUN_0046f390 at 0046f46e
;
; Referenced Globals:
;   undefined4 DAT_005b6d50
;
; Called Functions:
;   FUN_00472d10
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0046f2e0
        ;   Label: FUN_0046f2e0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0046f2e3
    MOV ECX,dword ptr [EAX + 0x134]     ; 0046f2e7
    MOV EDX,dword ptr [EAX + 0x138]     ; 0046f2ed
    CMP EDX,ECX                         ; 0046f2f3
    JZ 0x0046f329                       ; 0046f2f5
        ;   XREF to: 0046f329 (CONDITIONAL_JUMP)  ; LAB_0046f329
    PUSH ESI                            ; 0046f2f7
    PUSH EBX                            ; 0046f2f8
    JLE 0x0046f301                      ; 0046f2f9
        ;   XREF to: 0046f301 (CONDITIONAL_JUMP)  ; LAB_0046f301
    MOV EBX,EDX                         ; 0046f2fb
    MOV EDX,ECX                         ; 0046f2fd
    MOV ECX,EBX                         ; 0046f2ff
    LEA EBX,[EAX + ECX*0x1]             ; 0046f301
        ;   Label: LAB_0046f301
    ADD EAX,EDX                         ; 0046f304
    XOR ECX,ECX                         ; 0046f306
    PUSH EAX                            ; 0046f308
    MOV ESI,dword ptr [0x005b6d50]      ; 0046f309 | DAT_005b6d50
    MOV CL,byte ptr [EBX]               ; 0046f30f
    PUSH ESI                            ; 0046f311
    MOV dword ptr [ESP + 0x10],ECX      ; 0046f312
    MOV byte ptr [EBX],0x0              ; 0046f316
    CALL FUN_00472d10                   ; 0046f319
        ;   XREF to: 00472d10 (UNCONDITIONAL_CALL)  ; undefined FUN_00472d10()
    ADD ESP,0x8                         ; 0046f31e
    MOV AL,byte ptr [ESP + 0x8]         ; 0046f321
    MOV byte ptr [EBX],AL               ; 0046f325
    POP EBX                             ; 0046f327
    POP ESI                             ; 0046f328
    ADD ESP,0x4                         ; 0046f329
        ;   Label: LAB_0046f329
    RET                                 ; 0046f32c

