; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_FUN_004cd510(CBloodSplat *this_ptr,CVector3f *position,CVector3f *normal,EBloodType blood_type)
;
; Parameters:
; CBloodSplat *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   normal
; EBloodType       Stack[0x10]:4   blood_type
;
; XREF[1]:
;   core_gore.cpp_CGore_createWallBloodSplat_FUN_004ce980 at 004ce9a8
;
; Referenced Globals:
;   undefined4 DAT_005e0e18
;   undefined4 DAT_005e0e1c
;   undefined4 DAT_01d5ba14
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   crt_math.c_atan2_FUN_005a5cc1
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cd510
        ;   Label: core_gore.cpp_FUN_004cd510
    PUSH ESI                            ; 004cd511
    PUSH EDI                            ; 004cd512
    PUSH EBP                            ; 004cd513
    MOV ESI,dword ptr [ESP + 0x14]      ; 004cd514
    MOV EBP,dword ptr [ESP + 0x18]      ; 004cd518
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004cd51c
    LEA EAX,[ESI + 0x4]                 ; 004cd520
    MOV dword ptr [ESI + 0x14],0x1      ; 004cd523
    CMP EAX,EBP                         ; 004cd52a
    JZ 0x004cd53f                       ; 004cd52c
        ;   XREF to: 004cd53f (CONDITIONAL_JUMP)  ; LAB_004cd53f
    MOV EDX,dword ptr [EBP]             ; 004cd52e
    MOV dword ptr [EAX],EDX             ; 004cd531
    MOV EDX,dword ptr [EBP + 0x4]       ; 004cd533
    MOV dword ptr [EAX + 0x4],EDX       ; 004cd536
    MOV EDX,dword ptr [EBP + 0x8]       ; 004cd539
    MOV dword ptr [EAX + 0x8],EDX       ; 004cd53c
    FLD float ptr [EDI + 0x8]           ; 004cd53f
        ;   Label: LAB_004cd53f
    FMUL ST0                            ; 004cd542
    FLD float ptr [EDI]                 ; 004cd544
    FMUL ST0                            ; 004cd546
    FADDP                               ; 004cd548
    FSQRT                               ; 004cd54a
    FLD float ptr [EDI + 0x4]           ; 004cd54c
    CALL crt_math.c_atan2_FUN_005a5cc1  ; 004cd54f
        ;   XREF to: 005a5cc1 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005a5cc1()
    MOV dword ptr [ESI + 0x24],0x0      ; 004cd554
    FCHS                                ; 004cd55b
    FSTP float ptr [ESI + 0x1c]         ; 004cd55d
    FLD float ptr [EDI + 0x8]           ; 004cd560
    FLD float ptr [EDI]                 ; 004cd563
    CALL crt_math.c_atan2_FUN_005a5cc1  ; 004cd565
        ;   XREF to: 005a5cc1 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005a5cc1()
    PUSH 0x3                            ; 004cd56a
    LEA EBX,[ESI + 0x30]                ; 004cd56c
    PUSH 0x0                            ; 004cd56f
    FSTP float ptr [ESI + 0x20]         ; 004cd571
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 004cd574
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 004cd579
    MOV dword ptr [ESI + 0x2c],EAX      ; 004cd57c
    MOV EAX,EBP                         ; 004cd57f
    MOV dword ptr [ESI + 0x28],0x0      ; 004cd581
    FLD float ptr [EAX]                 ; 004cd588
    FMUL float ptr [0x005e0e18]         ; 004cd58a | DAT_005e0e18
    FISTP dword ptr [EBX]               ; 004cd590
    FLD float ptr [EAX + 0x4]           ; 004cd592
    FMUL float ptr [0x005e0e18]         ; 004cd595 | DAT_005e0e18
    FISTP dword ptr [EBX + 0x4]         ; 004cd59b
    FLD float ptr [EAX + 0x8]           ; 004cd59e
    FMUL float ptr [0x005e0e18]         ; 004cd5a1 | DAT_005e0e18
    FISTP dword ptr [EBX + 0x8]         ; 004cd5a7
    LEA EBX,[ESI + 0x3c]                ; 004cd5aa
    MOV EAX,EDI                         ; 004cd5ad
    FLD float ptr [EAX]                 ; 004cd5af
    FMUL float ptr [0x005e0e1c]         ; 004cd5b1 | DAT_005e0e1c
    FISTP dword ptr [EBX]               ; 004cd5b7
    FLD float ptr [EAX + 0x4]           ; 004cd5b9
    FMUL float ptr [0x005e0e1c]         ; 004cd5bc | DAT_005e0e1c
    FISTP dword ptr [EBX + 0x4]         ; 004cd5c2
    FLD float ptr [EAX + 0x8]           ; 004cd5c5
    FMUL float ptr [0x005e0e1c]         ; 004cd5c8 | DAT_005e0e1c
    FISTP dword ptr [EBX + 0x8]         ; 004cd5ce
    MOV EAX,dword ptr [ESP + 0x20]      ; 004cd5d1
    MOV dword ptr [ESI + 0x18],EAX      ; 004cd5d5
    MOV EAX,[0x01d5ba14]                ; 004cd5d8 | DAT_01d5ba14
    MOV dword ptr [ESI],0x0             ; 004cd5dd
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004cd5e3
    MOV EAX,dword ptr [EAX + 0x2c]      ; 004cd5ea
    MOV dword ptr [ESI + 0x10],EAX      ; 004cd5ed
    POP EBP                             ; 004cd5f0
    POP EDI                             ; 004cd5f1
    POP ESI                             ; 004cd5f2
    POP EBX                             ; 004cd5f3
    RET                                 ; 004cd5f4

