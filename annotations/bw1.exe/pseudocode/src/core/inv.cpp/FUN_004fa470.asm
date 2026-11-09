; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_inv_cpp_FUN_004fa470(CInventory *this_ptr,float max_charge)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   max_charge
;
; XREF[2]:
;   core_lightgun.cpp_FUN_00500d20 at 00500d4f
;   core_lightpis.cpp_FUN_00502480 at 005024af
;
; Referenced Globals:
;   undefined4 g_CBatteryClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fa470
        ;   Label: core_inv.cpp_FUN_004fa470
    PUSH ESI                            ; 004fa471
    PUSH EDI                            ; 004fa472
    PUSH EBP                            ; 004fa473
    MOV EBP,ESP                         ; 004fa474
    SUB ESP,0x10                        ; 004fa476
    AND ESP,0xfffffff8                  ; 004fa479
    MOV EDI,dword ptr [EBP + 0x14]      ; 004fa47c
    FLD float ptr [EBP + 0x18]          ; 004fa47f
    FLD1                                ; 004fa482
    FDIVRP                              ; 004fa484
    MOV EDX,dword ptr [EDI + 0x10]      ; 004fa486
    XOR EBX,EBX                         ; 004fa489
    FSTP float ptr [ESP]                ; 004fa48b
    TEST EDX,EDX                        ; 004fa48e
    JLE 0x004fa4b5                      ; 004fa490
        ;   XREF to: 004fa4b5 (CONDITIONAL_JUMP)  ; LAB_004fa4b5
    MOV ESI,EDI                         ; 004fa492
    MOV EAX,[0x007c385c]                ; 004fa494 | g_CBatteryClassInfo.name_hash
        ;   Label: LAB_004fa494
    PUSH EAX                            ; 004fa499
    MOV EDX,dword ptr [ESI + 0x14]      ; 004fa49a
    PUSH EDX                            ; 004fa49d
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004fa49e
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004fa4a3
    TEST EAX,EAX                        ; 004fa4a6
    JNZ 0x004fa4cb                      ; 004fa4a8
        ;   XREF to: 004fa4cb (CONDITIONAL_JUMP)  ; LAB_004fa4cb
    INC EBX                             ; 004fa4aa
        ;   Label: LAB_004fa4aa
    MOV ECX,dword ptr [EDI + 0x10]      ; 004fa4ab
    ADD ESI,0x4                         ; 004fa4ae
    CMP EBX,ECX                         ; 004fa4b1
    JL 0x004fa494                       ; 004fa4b3
        ;   XREF to: 004fa494 (CONDITIONAL_JUMP)  ; LAB_004fa494
    FLD float ptr [ESP]                 ; 004fa4b5
        ;   Label: LAB_004fa4b5
    FLD1                                ; 004fa4b8
    FDIVRP                              ; 004fa4ba
    FSTP float ptr [ESP + 0xc]          ; 004fa4bc
    MOV EAX,dword ptr [ESP + 0xc]       ; 004fa4c0
    MOV ESP,EBP                         ; 004fa4c4
    POP EBP                             ; 004fa4c6
    POP EDI                             ; 004fa4c7
    POP ESI                             ; 004fa4c8
    POP EBX                             ; 004fa4c9
    RET                                 ; 004fa4ca
    FLD float ptr [EAX + 0x2d8]         ; 004fa4cb
        ;   Label: LAB_004fa4cb
    FLD1                                ; 004fa4d1
    FDIVRP                              ; 004fa4d3
    FADD float ptr [ESP]                ; 004fa4d5
    FSTP float ptr [ESP]                ; 004fa4d8
    JMP 0x004fa4aa                      ; 004fa4db
        ;   XREF to: 004fa4aa (UNCONDITIONAL_JUMP)  ; LAB_004fa4aa

