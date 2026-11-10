; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hino_cpp_CHino_getTargetPoints_FUN_0059d410(CHino *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CHino *          Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Referenced Globals:
;   undefined4 DAT_02d24c4c
;   undefined4 DAT_02d24c70
;   undefined4 DAT_02d24c78
;
; Called Functions:
;   core_skeleton.cpp_FUN_0054dcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059d410
        ;   Label: core_hino.cpp_CHino_getTargetPoints_FUN_0059d410
    PUSH ESI                            ; 0059d411
    PUSH EDI                            ; 0059d412
    PUSH EBP                            ; 0059d413
    SUB ESP,0x48                        ; 0059d414
    MOV EBX,dword ptr [ESP + 0x60]      ; 0059d417
    MOV EDX,dword ptr [0x02d24c4c]      ; 0059d41b | DAT_02d24c4c
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0059d421
    PUSH EDX                            ; 0059d425
    ADD EAX,0x158                       ; 0059d426
    MOV EBP,0x3                         ; 0059d42b
    PUSH EAX                            ; 0059d430
    LEA ESI,[ESP + 0x44]                ; 0059d431
    LEA EDI,[ESP + 0x38]                ; 0059d435
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 0059d439
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    LEA ESI,[ESP + 0x44]                ; 0059d43e
    ADD ESP,0x8                         ; 0059d442
    LEA EAX,[ESP + 0x30]                ; 0059d445
    MOVSD ES:EDI,ESI                    ; 0059d449
    MOVSD ES:EDI,ESI                    ; 0059d44a
    MOVSD ES:EDI,ESI                    ; 0059d44b
    CMP EBX,EAX                         ; 0059d44c
    JZ 0x0059d464                       ; 0059d44e
        ;   XREF to: 0059d464 (CONDITIONAL_JUMP)  ; LAB_0059d464
    MOV EAX,dword ptr [ESP + 0x30]      ; 0059d450
    MOV dword ptr [EBX],EAX             ; 0059d454
    MOV EAX,dword ptr [ESP + 0x34]      ; 0059d456
    MOV dword ptr [EBX + 0x4],EAX       ; 0059d45a
    MOV EAX,dword ptr [ESP + 0x38]      ; 0059d45d
    MOV dword ptr [EBX + 0x8],EAX       ; 0059d461
    MOV ECX,dword ptr [0x02d24c70]      ; 0059d464 | DAT_02d24c70
        ;   Label: LAB_0059d464
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0059d46a
    PUSH ECX                            ; 0059d46e
    ADD EAX,0x158                       ; 0059d46f
    PUSH EAX                            ; 0059d474
    LEA ESI,[ESP + 0x14]                ; 0059d475
    LEA EDI,[ESP + 0x20]                ; 0059d479
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 0059d47d
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    LEA ESI,[ESP + 0x14]                ; 0059d482
    LEA EAX,[ESP + 0x20]                ; 0059d486
    ADD ESP,0x8                         ; 0059d48a
    LEA EDX,[EBX + 0xc]                 ; 0059d48d
    MOVSD ES:EDI,ESI                    ; 0059d490
    MOVSD ES:EDI,ESI                    ; 0059d491
    MOVSD ES:EDI,ESI                    ; 0059d492
    CMP EDX,EAX                         ; 0059d493
    JZ 0x0059d4ab                       ; 0059d495
        ;   XREF to: 0059d4ab (CONDITIONAL_JUMP)  ; LAB_0059d4ab
    MOV EAX,dword ptr [ESP + 0x18]      ; 0059d497
    MOV dword ptr [EDX],EAX             ; 0059d49b
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0059d49d
    MOV dword ptr [EDX + 0x4],EAX       ; 0059d4a1
    MOV EAX,dword ptr [ESP + 0x20]      ; 0059d4a4
    MOV dword ptr [EDX + 0x8],EAX       ; 0059d4a8
    MOV ESI,dword ptr [0x02d24c78]      ; 0059d4ab | DAT_02d24c78
        ;   Label: LAB_0059d4ab
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0059d4b1
    PUSH ESI                            ; 0059d4b5
    ADD EAX,0x158                       ; 0059d4b6
    LEA EDI,[ESP + 0x4]                 ; 0059d4bb
    PUSH EAX                            ; 0059d4bf
    LEA ESI,[ESP + 0x2c]                ; 0059d4c0
    ADD EBX,0x18                        ; 0059d4c4
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 0059d4c7
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    LEA ESI,[ESP + 0x2c]                ; 0059d4cc
    ADD ESP,0x8                         ; 0059d4d0
    MOV EAX,ESP                         ; 0059d4d3
    MOVSD ES:EDI,ESI                    ; 0059d4d5
    MOVSD ES:EDI,ESI                    ; 0059d4d6
    MOVSD ES:EDI,ESI                    ; 0059d4d7
    CMP EBX,EAX                         ; 0059d4d8
    JNZ 0x0059d4e6                      ; 0059d4da
        ;   XREF to: 0059d4e6 (CONDITIONAL_JUMP)  ; LAB_0059d4e6
    MOV EAX,EBP                         ; 0059d4dc
    ADD ESP,0x48                        ; 0059d4de
    POP EBP                             ; 0059d4e1
    POP EDI                             ; 0059d4e2
    POP ESI                             ; 0059d4e3
    POP EBX                             ; 0059d4e4
    RET                                 ; 0059d4e5
    MOV EAX,dword ptr [ESP]             ; 0059d4e6
        ;   Label: LAB_0059d4e6
    MOV dword ptr [EBX],EAX             ; 0059d4e9
    MOV EAX,dword ptr [ESP + 0x4]       ; 0059d4eb
    MOV dword ptr [EBX + 0x4],EAX       ; 0059d4ef
    MOV EAX,dword ptr [ESP + 0x8]       ; 0059d4f2
    MOV dword ptr [EBX + 0x8],EAX       ; 0059d4f6
    MOV EAX,EBP                         ; 0059d4f9
    ADD ESP,0x48                        ; 0059d4fb
    POP EBP                             ; 0059d4fe
    POP EDI                             ; 0059d4ff
    POP ESI                             ; 0059d500
    POP EBX                             ; 0059d501
    RET                                 ; 0059d502

