; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_wddvmem_cpp_reinitializeGraphicsSystem_FUN_0057a2f0(void)
;
;
; XREF[1]:
;   engine_2d.c_reinitializeGraphicsSystem_FUN_00402ad0 at 00402ad0
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_005fba20
;   undefined4 DAT_02cf5fcc
;   undefined4 DAT_02d0bce0
;   undefined4 DAT_02d0bce4
;   undefined4 DAT_02d0bce8
;   undefined4 DAT_02d0bcec
;   undefined4 DAT_02d0bcf8
;   undefined4 DAT_02d21b78
;
; Called Functions:
;   crt_ddraw.c_DirectDrawCreate
;   engine_special.cpp_restoreVideoMode_FUN_00565be0
;   wincore_wddvmem.cpp_FUN_00579bb0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0057a2f0
        ;   Label: wincore_wddvmem.cpp_reinitializeGraphicsSystem_FUN_0057a2f0
    XOR EDX,EDX                         ; 0057a2f1
    MOV ECX,dword ptr [0x02cf5fcc]      ; 0057a2f3 | DAT_02cf5fcc
    MOV dword ptr [0x02d0bcf8],EDX      ; 0057a2f9 | DAT_02d0bcf8
    TEST ECX,ECX                        ; 0057a2ff
    JNZ 0x0057a305                      ; 0057a301
        ;   XREF to: 0057a305 (CONDITIONAL_JUMP)  ; LAB_0057a305
    POP EBP                             ; 0057a303
    RET                                 ; 0057a304
    PUSH EDI                            ; 0057a305
        ;   Label: LAB_0057a305
    PUSH ESI                            ; 0057a306
    PUSH EBX                            ; 0057a307
    CALL engine_special.cpp_restoreVideoMode_FUN_00565be0 ; 0057a308
        ;   XREF to: 00565be0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_restoreVideoMode_FUN_00565be0()
    MOV EBX,dword ptr [0x02d0bcec]      ; 0057a30d | DAT_02d0bcec
    TEST EBX,EBX                        ; 0057a313
    JZ 0x0057a325                       ; 0057a315
        ;   XREF to: 0057a325 (CONDITIONAL_JUMP)  ; LAB_0057a325
    PUSH EBX                            ; 0057a317
    MOV EDX,dword ptr [EBX]             ; 0057a318
    XOR ESI,ESI                         ; 0057a31a
    CALL dword ptr [EDX + 0x8]          ; 0057a31c
    MOV dword ptr [0x02d0bcec],ESI      ; 0057a31f | DAT_02d0bcec
    MOV EDI,dword ptr [0x02d0bce8]      ; 0057a325 | DAT_02d0bce8
        ;   Label: LAB_0057a325
    TEST EDI,EDI                        ; 0057a32b
    JZ 0x0057a33d                       ; 0057a32d
        ;   XREF to: 0057a33d (CONDITIONAL_JUMP)  ; LAB_0057a33d
    PUSH EDI                            ; 0057a32f
    MOV EDX,dword ptr [EDI]             ; 0057a330
    XOR EBP,EBP                         ; 0057a332
    CALL dword ptr [EDX + 0x8]          ; 0057a334
    MOV dword ptr [0x02d0bce8],EBP      ; 0057a337 | DAT_02d0bce8
    MOV EAX,[0x02d0bce4]                ; 0057a33d | DAT_02d0bce4
        ;   Label: LAB_0057a33d
    TEST EAX,EAX                        ; 0057a342
    JZ 0x0057a354                       ; 0057a344
        ;   XREF to: 0057a354 (CONDITIONAL_JUMP)  ; LAB_0057a354
    PUSH EAX                            ; 0057a346
    MOV EDX,dword ptr [EAX]             ; 0057a347
    CALL dword ptr [EDX + 0x8]          ; 0057a349
    XOR EDX,EDX                         ; 0057a34c
    MOV dword ptr [0x02d0bce4],EDX      ; 0057a34e | DAT_02d0bce4
    MOV ECX,dword ptr [0x02d0bce0]      ; 0057a354 | DAT_02d0bce0
        ;   Label: LAB_0057a354
    TEST ECX,ECX                        ; 0057a35a
    JZ 0x0057a377                       ; 0057a35c
        ;   XREF to: 0057a377 (CONDITIONAL_JUMP)  ; LAB_0057a377
    PUSH ECX                            ; 0057a35e
    MOV EDX,dword ptr [ECX]             ; 0057a35f
    CALL dword ptr [EDX + 0x4c]         ; 0057a361
    MOV EAX,[0x02d0bce0]                ; 0057a364 | DAT_02d0bce0
    PUSH EAX                            ; 0057a369
    MOV EDX,dword ptr [EAX]             ; 0057a36a
    XOR EBX,EBX                         ; 0057a36c
    CALL dword ptr [EDX + 0x8]          ; 0057a36e
    MOV dword ptr [0x02d0bce0],EBX      ; 0057a371 | DAT_02d0bce0
    PUSH 0x0                            ; 0057a377
        ;   Label: LAB_0057a377
    PUSH 0x2d0bce0                      ; 0057a379 | DAT_02d0bce0
    PUSH 0x0                            ; 0057a37e
    CALL crt_ddraw.c_DirectDrawCreate   ; 0057a380
        ;   XREF to: 005b254a (UNCONDITIONAL_CALL)  ; HRESULT crt_ddraw.c_DirectDrawCreate(GUID * lp_guid, LPDIRECTDRAW * lplp_dd, IUnknown * p_unk_outer)
    TEST EAX,EAX                        ; 0057a385
    JNZ 0x0057a39d                      ; 0057a387
        ;   XREF to: 0057a39d (CONDITIONAL_JUMP)  ; LAB_0057a39d
    PUSH 0x11                           ; 0057a389
    MOV ESI,dword ptr [0x02d21b78]      ; 0057a38b | DAT_02d21b78
    MOV EAX,[0x02d0bce0]                ; 0057a391 | DAT_02d0bce0
    PUSH ESI                            ; 0057a396
    MOV EDX,dword ptr [EAX]             ; 0057a397
    PUSH EAX                            ; 0057a399
    CALL dword ptr [EDX + 0x50]         ; 0057a39a
    MOV EDI,dword ptr [0x005fba20]      ; 0057a39d | DAT_005fba20
        ;   Label: LAB_0057a39d
    PUSH EDI                            ; 0057a3a3
    MOV EBP,dword ptr [0x005fba1c]      ; 0057a3a4 | DAT_005fba1c
    PUSH EBP                            ; 0057a3aa
    MOV EAX,[0x005fba18]                ; 0057a3ab | DAT_005fba18
    PUSH EAX                            ; 0057a3b0
    CALL wincore_wddvmem.cpp_FUN_00579bb0 ; 0057a3b1
        ;   XREF to: 00579bb0 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_FUN_00579bb0()
    ADD ESP,0xc                         ; 0057a3b6
    POP EBX                             ; 0057a3b9
    POP ESI                             ; 0057a3ba
    POP EDI                             ; 0057a3bb
    POP EBP                             ; 0057a3bc
    RET                                 ; 0057a3bd

