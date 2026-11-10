; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gargoyle_cpp_CGargoyle_getTargetPoints_FUN_004c6310(CGargoyle *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CGargoyle *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Referenced Globals:
;   undefined4 DAT_01d22ca4
;   undefined4 DAT_01d22cb8
;   undefined4 DAT_01d22cbc
;   undefined4 DAT_01d22cc8
;   undefined4 DAT_01d22cd0
;
; Called Functions:
;   core_skeleton.cpp_FUN_0054dcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c6310
        ;   Label: core_gargoyle.cpp_CGargoyle_getTargetPoints_FUN_004c6310
    PUSH ESI                            ; 004c6311
    PUSH EDI                            ; 004c6312
    PUSH EBP                            ; 004c6313
    SUB ESP,0x78                        ; 004c6314
    MOV EBP,dword ptr [ESP + 0x8c]      ; 004c6317
    MOV EDX,dword ptr [0x01d22ca4]      ; 004c631e | DAT_01d22ca4
    PUSH EDX                            ; 004c6324
    LEA EAX,[EBP + 0x158]               ; 004c6325
    MOV EBX,0x1                         ; 004c632b
    PUSH EAX                            ; 004c6330
    LEA ESI,[ESP + 0x5c]                ; 004c6331
    LEA EDI,[ESP + 0x20]                ; 004c6335
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 004c6339
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    LEA ESI,[ESP + 0x5c]                ; 004c633e
    ADD ESP,0x8                         ; 004c6342
    LEA EAX,[ESP + 0x18]                ; 004c6345
    MOV ECX,dword ptr [ESP + 0x90]      ; 004c6349
    MOVSD ES:EDI,ESI                    ; 004c6350
    MOVSD ES:EDI,ESI                    ; 004c6351
    MOVSD ES:EDI,ESI                    ; 004c6352
    CMP EAX,ECX                         ; 004c6353
    JNZ 0x004c64a8                      ; 004c6355
        ;   XREF to: 004c64a8 (CONDITIONAL_JUMP)  ; LAB_004c64a8
    MOV EAX,dword ptr [EBP + 0xd054]    ; 004c635b
        ;   Label: LAB_004c635b
    CMP dword ptr [EBP + EAX*0x4 + 0x2298],0x0 ; 004c6361
    JZ 0x004c63c2                       ; 004c6369
        ;   XREF to: 004c63c2 (CONDITIONAL_JUMP)  ; LAB_004c63c2
    MOV EDI,dword ptr [0x01d22cb8]      ; 004c636b | DAT_01d22cb8
    PUSH EDI                            ; 004c6371
    LEA EAX,[EBP + 0x158]               ; 004c6372
    PUSH EAX                            ; 004c6378
    LEA ESI,[ESP + 0x2c]                ; 004c6379
    LEA EDI,[ESP + 0x14]                ; 004c637d
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 004c6381
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    LEA EAX,[EBX*0x4 + 0x0]             ; 004c6386
    ADD ESP,0x8                         ; 004c638d
    SUB EAX,EBX                         ; 004c6390
    MOV EDX,dword ptr [ESP + 0x90]      ; 004c6392
    SHL EAX,0x2                         ; 004c6399
    LEA ESI,[ESP + 0x24]                ; 004c639c
    ADD EDX,EAX                         ; 004c63a0
    LEA EAX,[ESP + 0xc]                 ; 004c63a2
    MOVSD ES:EDI,ESI                    ; 004c63a6
    MOVSD ES:EDI,ESI                    ; 004c63a7
    MOVSD ES:EDI,ESI                    ; 004c63a8
    CMP EDX,EAX                         ; 004c63a9
    JZ 0x004c63c1                       ; 004c63ab
        ;   XREF to: 004c63c1 (CONDITIONAL_JUMP)  ; LAB_004c63c1
    MOV EAX,dword ptr [ESP + 0xc]       ; 004c63ad
    MOV dword ptr [EDX],EAX             ; 004c63b1
    MOV EAX,dword ptr [ESP + 0x10]      ; 004c63b3
    MOV dword ptr [EDX + 0x4],EAX       ; 004c63b7
    MOV EAX,dword ptr [ESP + 0x14]      ; 004c63ba
    MOV dword ptr [EDX + 0x8],EAX       ; 004c63be
    INC EBX                             ; 004c63c1
        ;   Label: LAB_004c63c1
    MOV EAX,dword ptr [EBP + 0xd05c]    ; 004c63c2
        ;   Label: LAB_004c63c2
    CMP dword ptr [EBP + EAX*0x4 + 0x2298],0x0 ; 004c63c8
    JZ 0x004c6427                       ; 004c63d0
        ;   XREF to: 004c6427 (CONDITIONAL_JUMP)  ; LAB_004c6427
    MOV ECX,dword ptr [0x01d22cbc]      ; 004c63d2 | DAT_01d22cbc
    PUSH ECX                            ; 004c63d8
    LEA EAX,[EBP + 0x158]               ; 004c63d9
    PUSH EAX                            ; 004c63df
    LEA ESI,[ESP + 0x8]                 ; 004c63e0
    LEA EDI,[ESP + 0x68]                ; 004c63e4
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 004c63e8
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    LEA EAX,[EBX*0x4 + 0x0]             ; 004c63ed
    ADD ESP,0x8                         ; 004c63f4
    SUB EAX,EBX                         ; 004c63f7
    MOV EDX,dword ptr [ESP + 0x90]      ; 004c63f9
    SHL EAX,0x2                         ; 004c6400
    MOV ESI,ESP                         ; 004c6403
    ADD EDX,EAX                         ; 004c6405
    LEA EAX,[ESP + 0x60]                ; 004c6407
    MOVSD ES:EDI,ESI                    ; 004c640b
    MOVSD ES:EDI,ESI                    ; 004c640c
    MOVSD ES:EDI,ESI                    ; 004c640d
    CMP EDX,EAX                         ; 004c640e
    JZ 0x004c6426                       ; 004c6410
        ;   XREF to: 004c6426 (CONDITIONAL_JUMP)  ; LAB_004c6426
    MOV EAX,dword ptr [ESP + 0x60]      ; 004c6412
    MOV dword ptr [EDX],EAX             ; 004c6416
    MOV EAX,dword ptr [ESP + 0x64]      ; 004c6418
    MOV dword ptr [EDX + 0x4],EAX       ; 004c641c
    MOV EAX,dword ptr [ESP + 0x68]      ; 004c641f
    MOV dword ptr [EDX + 0x8],EAX       ; 004c6423
    INC EBX                             ; 004c6426
        ;   Label: LAB_004c6426
    MOV EAX,dword ptr [EBP + 0xd074]    ; 004c6427
        ;   Label: LAB_004c6427
    CMP dword ptr [EBP + EAX*0x4 + 0x2298],0x0 ; 004c642d
    JZ 0x004c648e                       ; 004c6435
        ;   XREF to: 004c648e (CONDITIONAL_JUMP)  ; LAB_004c648e
    MOV EDI,dword ptr [0x01d22cc8]      ; 004c6437 | DAT_01d22cc8
    PUSH EDI                            ; 004c643d
    LEA EAX,[EBP + 0x158]               ; 004c643e
    PUSH EAX                            ; 004c6444
    LEA ESI,[ESP + 0x74]                ; 004c6445
    LEA EDI,[ESP + 0x44]                ; 004c6449
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 004c644d
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    LEA EAX,[EBX*0x4 + 0x0]             ; 004c6452
    ADD ESP,0x8                         ; 004c6459
    SUB EAX,EBX                         ; 004c645c
    MOV EDX,dword ptr [ESP + 0x90]      ; 004c645e
    SHL EAX,0x2                         ; 004c6465
    LEA ESI,[ESP + 0x6c]                ; 004c6468
    ADD EDX,EAX                         ; 004c646c
    LEA EAX,[ESP + 0x3c]                ; 004c646e
    MOVSD ES:EDI,ESI                    ; 004c6472
    MOVSD ES:EDI,ESI                    ; 004c6473
    MOVSD ES:EDI,ESI                    ; 004c6474
    CMP EDX,EAX                         ; 004c6475
    JZ 0x004c648d                       ; 004c6477
        ;   XREF to: 004c648d (CONDITIONAL_JUMP)  ; LAB_004c648d
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004c6479
    MOV dword ptr [EDX],EAX             ; 004c647d
    MOV EAX,dword ptr [ESP + 0x40]      ; 004c647f
    MOV dword ptr [EDX + 0x4],EAX       ; 004c6483
    MOV EAX,dword ptr [ESP + 0x44]      ; 004c6486
    MOV dword ptr [EDX + 0x8],EAX       ; 004c648a
    INC EBX                             ; 004c648d
        ;   Label: LAB_004c648d
    MOV EAX,dword ptr [EBP + 0xd078]    ; 004c648e
        ;   Label: LAB_004c648e
    CMP dword ptr [EBP + EAX*0x4 + 0x2298],0x0 ; 004c6494
    JNZ 0x004c64c1                      ; 004c649c
        ;   XREF to: 004c64c1 (CONDITIONAL_JUMP)  ; LAB_004c64c1
    MOV EAX,EBX                         ; 004c649e
    ADD ESP,0x78                        ; 004c64a0
    POP EBP                             ; 004c64a3
    POP EDI                             ; 004c64a4
    POP ESI                             ; 004c64a5
    POP EBX                             ; 004c64a6
    RET                                 ; 004c64a7
    MOV EAX,dword ptr [ESP + 0x18]      ; 004c64a8
        ;   Label: LAB_004c64a8
    MOV dword ptr [ECX],EAX             ; 004c64ac
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004c64ae
    MOV dword ptr [ECX + 0x4],EAX       ; 004c64b2
    MOV EAX,dword ptr [ESP + 0x20]      ; 004c64b5
    MOV dword ptr [ECX + 0x8],EAX       ; 004c64b9
    JMP 0x004c635b                      ; 004c64bc
        ;   XREF to: 004c635b (UNCONDITIONAL_JUMP)  ; LAB_004c635b
    MOV ECX,dword ptr [0x01d22cd0]      ; 004c64c1 | DAT_01d22cd0
        ;   Label: LAB_004c64c1
    PUSH ECX                            ; 004c64c7
    ADD EBP,0x158                       ; 004c64c8
    PUSH EBP                            ; 004c64ce
    LEA ESI,[ESP + 0x50]                ; 004c64cf
    LEA EDI,[ESP + 0x38]                ; 004c64d3
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 004c64d7
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    LEA EAX,[EBX*0x4 + 0x0]             ; 004c64dc
    ADD ESP,0x8                         ; 004c64e3
    SUB EAX,EBX                         ; 004c64e6
    MOV EDX,dword ptr [ESP + 0x90]      ; 004c64e8
    SHL EAX,0x2                         ; 004c64ef
    LEA ESI,[ESP + 0x48]                ; 004c64f2
    ADD EDX,EAX                         ; 004c64f6
    LEA EAX,[ESP + 0x30]                ; 004c64f8
    MOVSD ES:EDI,ESI                    ; 004c64fc
    MOVSD ES:EDI,ESI                    ; 004c64fd
    MOVSD ES:EDI,ESI                    ; 004c64fe
    CMP EDX,EAX                         ; 004c64ff
    JZ 0x004c6517                       ; 004c6501
        ;   XREF to: 004c6517 (CONDITIONAL_JUMP)  ; LAB_004c6517
    MOV EAX,dword ptr [ESP + 0x30]      ; 004c6503
    MOV dword ptr [EDX],EAX             ; 004c6507
    MOV EAX,dword ptr [ESP + 0x34]      ; 004c6509
    MOV dword ptr [EDX + 0x4],EAX       ; 004c650d
    MOV EAX,dword ptr [ESP + 0x38]      ; 004c6510
    MOV dword ptr [EDX + 0x8],EAX       ; 004c6514
    INC EBX                             ; 004c6517
        ;   Label: LAB_004c6517
    MOV EAX,EBX                         ; 004c6518
    ADD ESP,0x78                        ; 004c651a
    POP EBP                             ; 004c651d
    POP EDI                             ; 004c651e
    POP ESI                             ; 004c651f
    POP EBX                             ; 004c6520
    RET                                 ; 004c6521

