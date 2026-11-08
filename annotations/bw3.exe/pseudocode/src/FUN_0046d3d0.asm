; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046d3d0(int param_1,int param_2,int param_3,uint param_4)
;
;
; XREF[5]:
;   FUN_004540c0 at 00454268
;   FUN_00476070 at 00476611
;   FUN_004772f0 at 0047730a
;   FUN_004addd0 at 004ae0e4
;   FUN_00548c70 at 005493c7
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6af74
;   undefined4 DAT_01c6af80
;   undefined4 DAT_01c6af8c
;   undefined4 DAT_01c6b5c0
;   undefined4 DAT_01c6cee8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046d3d0
        ;   Label: FUN_0046d3d0
    PUSH ESI                            ; 0046d3d1
    MOV EBX,dword ptr [ESP + 0x14]      ; 0046d3d2
    MOV EDX,dword ptr [ESP + 0x18]      ; 0046d3d6
    MOV CL,byte ptr [0x01c6af8c]        ; 0046d3da | DAT_01c6af8c
    MOV ESI,EBX                         ; 0046d3e0
    SHL EDX,CL                          ; 0046d3e2
    MOV CL,byte ptr [0x01c6af80]        ; 0046d3e4 | DAT_01c6af80
    MOV EAX,dword ptr [ESP + 0x10]      ; 0046d3ea
    SHL ESI,CL                          ; 0046d3ee
    MOV CL,byte ptr [0x01c6af74]        ; 0046d3f0 | DAT_01c6af74
    SHL EBX,0x8                         ; 0046d3f6
    SHL EAX,CL                          ; 0046d3f9
    MOV ECX,dword ptr [ESP + 0x10]      ; 0046d3fb
    OR EAX,ESI                          ; 0046d3ff
    SHL ECX,0x10                        ; 0046d401
    OR EDX,EAX                          ; 0046d404
    MOV EAX,dword ptr [ESP + 0x18]      ; 0046d406
    OR ECX,EBX                          ; 0046d40a
    OR EAX,ECX                          ; 0046d40c
    CMP dword ptr [0x01c6cee8],0x0      ; 0046d40e | DAT_01c6cee8
    JNZ 0x0046d436                      ; 0046d415
        ;   XREF to: 0046d436 (CONDITIONAL_JUMP)  ; LAB_0046d436
    CMP dword ptr [0x005fba20],0x20     ; 0046d417 | DAT_005fba20
    JNZ 0x0046d422                      ; 0046d41e
        ;   XREF to: 0046d422 (CONDITIONAL_JUMP)  ; LAB_0046d422
    MOV EAX,EDX                         ; 0046d420
    MOV EDX,dword ptr [ESP + 0xc]       ; 0046d422
        ;   Label: LAB_0046d422
    MOV ECX,EAX                         ; 0046d426
    MOV EDX,dword ptr [EDX + 0x14]      ; 0046d428
    OR ECX,EDX                          ; 0046d42b
    MOV dword ptr [0x01c6b5c0],ECX      ; 0046d42d | DAT_01c6b5c0
    POP ESI                             ; 0046d433
    POP EBX                             ; 0046d434
    RET                                 ; 0046d435
    CMP dword ptr [0x005fba20],0x20     ; 0046d436 | DAT_005fba20
        ;   Label: LAB_0046d436
    JNZ 0x0046d441                      ; 0046d43d
        ;   XREF to: 0046d441 (CONDITIONAL_JUMP)  ; LAB_0046d441
    MOV EAX,EDX                         ; 0046d43f
    MOV ECX,EAX                         ; 0046d441
        ;   Label: LAB_0046d441
    MOV dword ptr [0x01c6b5c0],ECX      ; 0046d443 | DAT_01c6b5c0
    POP ESI                             ; 0046d449
    POP EBX                             ; 0046d44a
    RET                                 ; 0046d44b

