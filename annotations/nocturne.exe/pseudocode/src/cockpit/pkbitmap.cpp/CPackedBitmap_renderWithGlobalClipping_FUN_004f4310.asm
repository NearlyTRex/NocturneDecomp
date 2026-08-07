; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderWithGlobalClipping_FUN_004f4310(CPackedBitmap *this_ptr,int dest_x,int dest_y,int src_left,int src_top,int width,int height)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   dest_x
; int              Stack[0xc]:4   dest_y
; int              Stack[0x10]:4   src_left
; int              Stack[0x14]:4   src_top
; int              Stack[0x18]:4   width
; int              Stack[0x1c]:4   height
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_renderIfIntersectsRect_FUN_004f4410 at 004f44b5
;
; Referenced Globals:
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_renderClippedRegion_FUN_004f4170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4310
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_renderWithGlobalClipping_FUN_004f4310
    PUSH ESI                            ; 004f4311
    PUSH EDI                            ; 004f4312
    PUSH EBP                            ; 004f4313
    MOV ECX,dword ptr [ESP + 0x14]      ; 004f4314
    MOV EBX,dword ptr [ESP + 0x18]      ; 004f4318
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004f431c
    MOV EDX,dword ptr [ESP + 0x20]      ; 004f4320
    MOV EAX,dword ptr [ESP + 0x24]      ; 004f4324
    MOV EDI,dword ptr [ESP + 0x2c]      ; 004f4328
    CMP dword ptr [ECX + 0x20],0x0      ; 004f432c
    JZ 0x004f43f1                       ; 004f4330
        ;   XREF to: 004f43f1 (CONDITIONAL_JUMP)  ; LAB_004f43f1
    CMP dword ptr [ECX + 0x14],0x0      ; 004f4336
    JZ 0x004f43f1                       ; 004f433a
        ;   XREF to: 004f43f1 (CONDITIONAL_JUMP)  ; LAB_004f43f1
    MOV EBP,dword ptr [0x01c00c58]      ; 004f4340 | g_ClipLeft
    CMP EBX,EBP                         ; 004f4346
    JGE 0x004f4354                      ; 004f4348
        ;   XREF to: 004f4354 (CONDITIONAL_JUMP)  ; LAB_004f4354
    SUB EBP,EBX                         ; 004f434a
    MOV EBX,dword ptr [0x01c00c58]      ; 004f434c | g_ClipLeft
    ADD EDX,EBP                         ; 004f4352
    MOV EBP,dword ptr [0x01c00c5c]      ; 004f4354 | g_ClipTop
        ;   Label: LAB_004f4354
    CMP ESI,EBP                         ; 004f435a
    JGE 0x004f4368                      ; 004f435c
        ;   XREF to: 004f4368 (CONDITIONAL_JUMP)  ; LAB_004f4368
    SUB EBP,ESI                         ; 004f435e
    MOV ESI,dword ptr [0x01c00c5c]      ; 004f4360 | g_ClipTop
    ADD EAX,EBP                         ; 004f4366
    MOV EBP,dword ptr [ESP + 0x28]      ; 004f4368
        ;   Label: LAB_004f4368
    ADD EBP,EBX                         ; 004f436c
    SUB EBP,EDX                         ; 004f436e
    CMP EBP,dword ptr [0x01c00c60]      ; 004f4370 | g_ClipRight
    JLE 0x004f4386                      ; 004f4376
        ;   XREF to: 004f4386 (CONDITIONAL_JUMP)  ; LAB_004f4386
    MOV EBP,dword ptr [0x01c00c60]      ; 004f4378 | g_ClipRight
    SUB EBP,EBX                         ; 004f437e
    ADD EBP,EDX                         ; 004f4380
    MOV dword ptr [ESP + 0x28],EBP      ; 004f4382
    LEA EBP,[ESI + EDI*0x1]             ; 004f4386
        ;   Label: LAB_004f4386
    SUB EBP,EAX                         ; 004f4389
    CMP EBP,dword ptr [0x01c00c64]      ; 004f438b | g_ClipBottom
    JLE 0x004f439d                      ; 004f4391
        ;   XREF to: 004f439d (CONDITIONAL_JUMP)  ; LAB_004f439d
    MOV EDI,dword ptr [0x01c00c64]      ; 004f4393 | g_ClipBottom
    SUB EDI,ESI                         ; 004f4399
    ADD EDI,EAX                         ; 004f439b
    MOV EBP,dword ptr [ESP + 0x28]      ; 004f439d
        ;   Label: LAB_004f439d
    CMP EDX,EBP                         ; 004f43a1
    JG 0x004f43f1                       ; 004f43a3
        ;   XREF to: 004f43f1 (CONDITIONAL_JUMP)  ; LAB_004f43f1
    CMP EAX,EDI                         ; 004f43a5
    JG 0x004f43f1                       ; 004f43a7
        ;   XREF to: 004f43f1 (CONDITIONAL_JUMP)  ; LAB_004f43f1
    TEST EBP,EBP                        ; 004f43a9
    JLE 0x004f43f1                      ; 004f43ab
        ;   XREF to: 004f43f1 (CONDITIONAL_JUMP)  ; LAB_004f43f1
    TEST EDI,EDI                        ; 004f43ad
    JLE 0x004f43f1                      ; 004f43af
        ;   XREF to: 004f43f1 (CONDITIONAL_JUMP)  ; LAB_004f43f1
    CMP EDX,dword ptr [ECX + 0x18]      ; 004f43b1
    JGE 0x004f43f1                      ; 004f43b4
        ;   XREF to: 004f43f1 (CONDITIONAL_JUMP)  ; LAB_004f43f1
    CMP EAX,dword ptr [ECX + 0x1c]      ; 004f43b6
    JGE 0x004f43f1                      ; 004f43b9
        ;   XREF to: 004f43f1 (CONDITIONAL_JUMP)  ; LAB_004f43f1
    TEST EDX,EDX                        ; 004f43bb
    JL 0x004f43f6                       ; 004f43bd
        ;   XREF to: 004f43f6 (CONDITIONAL_JUMP)  ; LAB_004f43f6
    TEST EAX,EAX                        ; 004f43bf
        ;   Label: LAB_004f43bf
    JL 0x004f43fc                       ; 004f43c1
        ;   XREF to: 004f43fc (CONDITIONAL_JUMP)  ; LAB_004f43fc
    MOV EBP,dword ptr [ESP + 0x28]      ; 004f43c3
        ;   Label: LAB_004f43c3
    CMP EBP,dword ptr [ECX + 0x18]      ; 004f43c7
    JL 0x004f43d4                       ; 004f43ca
        ;   XREF to: 004f43d4 (CONDITIONAL_JUMP)  ; LAB_004f43d4
    MOV EBP,dword ptr [ECX + 0x18]      ; 004f43cc
    DEC EBP                             ; 004f43cf
    MOV dword ptr [ESP + 0x28],EBP      ; 004f43d0
    MOV EBP,dword ptr [ECX + 0x1c]      ; 004f43d4
        ;   Label: LAB_004f43d4
    CMP EDI,EBP                         ; 004f43d7
    JL 0x004f43de                       ; 004f43d9
        ;   XREF to: 004f43de (CONDITIONAL_JUMP)  ; LAB_004f43de
    LEA EDI,[EBP + -0x1]                ; 004f43db
    PUSH EDI                            ; 004f43de
        ;   Label: LAB_004f43de
    MOV EDI,dword ptr [ESP + 0x2c]      ; 004f43df
    PUSH EDI                            ; 004f43e3
    PUSH EAX                            ; 004f43e4
    PUSH EDX                            ; 004f43e5
    PUSH ESI                            ; 004f43e6
    PUSH EBX                            ; 004f43e7
    PUSH ECX                            ; 004f43e8
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_renderClippedRegion_FUN_004f4170 ; 004f43e9
        ;   XREF to: 004f4170 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_renderClippedRegion_FUN_004f4170(CPackedBitmap * this_ptr, int dest_x, int dest_y, int clip_left, ...)
    ADD ESP,0x1c                        ; 004f43ee
    POP EBP                             ; 004f43f1
        ;   Label: LAB_004f43f1
    POP EDI                             ; 004f43f2
    POP ESI                             ; 004f43f3
    POP EBX                             ; 004f43f4
    RET                                 ; 004f43f5
    SUB EBX,EDX                         ; 004f43f6
        ;   Label: LAB_004f43f6
    XOR EDX,EDX                         ; 004f43f8
    JMP 0x004f43bf                      ; 004f43fa
        ;   XREF to: 004f43bf (UNCONDITIONAL_JUMP)  ; LAB_004f43bf
    SUB ESI,EAX                         ; 004f43fc
        ;   Label: LAB_004f43fc
    XOR EAX,EAX                         ; 004f43fe
    JMP 0x004f43c3                      ; 004f4400
        ;   XREF to: 004f43c3 (UNCONDITIONAL_JUMP)  ; LAB_004f43c3

