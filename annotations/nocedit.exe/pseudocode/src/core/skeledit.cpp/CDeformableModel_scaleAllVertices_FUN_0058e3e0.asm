; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeledit_cpp_CDeformableModel_scaleAllVertices_FUN_0058e3e0(CDeformableModel *this_ptr,float scale)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   scale
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 00597f44
;
; Called Functions:
;   crt_stack.c___STK_FUN_005ff9f3
;
; *****************************************************************************

section .text

    PUSH 0x1c                           ; 0058e3e0
        ;   Label: core_skeledit.cpp_CDeformableModel_scaleAllVertices_FUN_0058e3e0
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 0058e3e5
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; void crt_stack.c___STK_FUN_005ff9f3()
    PUSH ESI                            ; 0058e3ea
    PUSH EDI                            ; 0058e3eb
    PUSH EBP                            ; 0058e3ec
    SUB ESP,0xc                         ; 0058e3ed
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0058e3f0
    PUSH EBX                            ; 0058e3f4
    XOR EDX,EDX                         ; 0058e3f5
    MOV ECX,dword ptr [EBP]             ; 0058e3f7
    MOV dword ptr [ESP + 0x4],EDX       ; 0058e3fa
    TEST ECX,ECX                        ; 0058e3fe
    JLE 0x0058e471                      ; 0058e400
        ;   XREF to: 0058e471 (CONDITIONAL_JUMP)  ; LAB_0058e471
    MOV dword ptr [ESP + 0x8],EDX       ; 0058e402
    MOV EAX,dword ptr [ESP + 0x8]       ; 0058e406
        ;   Label: LAB_0058e406
    XOR EDI,EDI                         ; 0058e40a
    XOR ESI,ESI                         ; 0058e40c
    MOV dword ptr [ESP + 0xc],EAX       ; 0058e40e
    MOV EAX,dword ptr [ESP + 0xc]       ; 0058e412
        ;   Label: LAB_0058e412
    ADD EAX,EBP                         ; 0058e416
    CMP ESI,dword ptr [EAX + 0x2c]      ; 0058e418
    JGE 0x0058e456                      ; 0058e41b
        ;   XREF to: 0058e456 (CONDITIONAL_JUMP)  ; LAB_0058e456
    MOV EBX,dword ptr [EAX + 0x40]      ; 0058e41d
    ADD EBX,EDI                         ; 0058e420
    XOR EDX,EDX                         ; 0058e422
    LEA EAX,[EBX + 0x10]                ; 0058e424
    XOR ECX,ECX                         ; 0058e427
        ;   Label: LAB_0058e427
    MOV CL,byte ptr [EBX]               ; 0058e429
    CMP EDX,ECX                         ; 0058e42b
    JGE 0x0058e4d7                      ; 0058e42d
        ;   XREF to: 0058e4d7 (CONDITIONAL_JUMP)  ; LAB_0058e4d7
    FLD float ptr [ESP + 0x24]          ; 0058e433
    FLD float ptr [EAX]                 ; 0058e437
    FMUL ST1                            ; 0058e439
    FLD float ptr [EAX + 0x4]           ; 0058e43b
    FMUL ST2                            ; 0058e43e
    FLD float ptr [EAX + 0x8]           ; 0058e440
    FMULP ST3                           ; 0058e443
    ADD EAX,0xc                         ; 0058e445
    INC EDX                             ; 0058e448
    FSTP float ptr [EAX + -0x8]         ; 0058e449
    FXCH                                ; 0058e44c
    FSTP float ptr [EAX + -0x4]         ; 0058e44e
    FSTP float ptr [EAX + -0xc]         ; 0058e451
    JMP 0x0058e427                      ; 0058e454
        ;   XREF to: 0058e427 (UNCONDITIONAL_JUMP)  ; LAB_0058e427
    MOV EBX,dword ptr [ESP + 0x8]       ; 0058e456
        ;   Label: LAB_0058e456
    MOV ESI,dword ptr [ESP + 0x4]       ; 0058e45a
    MOV EDI,dword ptr [EBP]             ; 0058e45e
    ADD EBX,0x4                         ; 0058e461
    INC ESI                             ; 0058e464
    MOV dword ptr [ESP + 0x8],EBX       ; 0058e465
    MOV dword ptr [ESP + 0x4],ESI       ; 0058e469
    CMP ESI,EDI                         ; 0058e46d
    JL 0x0058e406                       ; 0058e46f
        ;   XREF to: 0058e406 (CONDITIONAL_JUMP)  ; LAB_0058e406
    LEA EDI,[EBP + 0x7c90]              ; 0058e471
        ;   Label: LAB_0058e471
    MOV ESI,EDI                         ; 0058e477
    ADD EDI,0x4b0                       ; 0058e479
    FLD float ptr [ESP + 0x24]          ; 0058e47f
    POP EBX                             ; 0058e483
    FLD float ptr [ESI]                 ; 0058e484
        ;   Label: LAB_0058e484
    FMUL ST1                            ; 0058e486
    FLD float ptr [ESI + 0x4]           ; 0058e488
    FMUL ST2                            ; 0058e48b
    FLD float ptr [ESI + 0x8]           ; 0058e48d
    ADD ESI,0xc                         ; 0058e490
    FMUL ST3                            ; 0058e493
    FXCH                                ; 0058e495
    FSTP float ptr [ESI + -0x8]         ; 0058e497
    FSTP float ptr [ESI + -0x4]         ; 0058e49a
    FSTP float ptr [ESI + -0xc]         ; 0058e49d
    CMP ESI,EDI                         ; 0058e4a0
    JNZ 0x0058e484                      ; 0058e4a2
        ;   XREF to: 0058e484 (CONDITIONAL_JUMP)  ; LAB_0058e484
    FLD float ptr [EBP + 0x7c84]        ; 0058e4a4
    FMUL ST1                            ; 0058e4aa
    FLD float ptr [EBP + 0x7c88]        ; 0058e4ac
    FMUL ST2                            ; 0058e4b2
    FLD float ptr [EBP + 0x7c8c]        ; 0058e4b4
    FMULP ST3                           ; 0058e4ba
    FXCH                                ; 0058e4bc
    FSTP float ptr [EBP + 0x7c84]       ; 0058e4be
    FSTP float ptr [EBP + 0x7c88]       ; 0058e4c4
    FSTP float ptr [EBP + 0x7c8c]       ; 0058e4ca
    ADD ESP,0xc                         ; 0058e4d0
    POP EBP                             ; 0058e4d3
    POP EDI                             ; 0058e4d4
    POP ESI                             ; 0058e4d5
    RET                                 ; 0058e4d6
    INC ESI                             ; 0058e4d7
        ;   Label: LAB_0058e4d7
    ADD EDI,0x34                        ; 0058e4d8
    JMP 0x0058e412                      ; 0058e4db
        ;   XREF to: 0058e412 (UNCONDITIONAL_JUMP)  ; LAB_0058e412

