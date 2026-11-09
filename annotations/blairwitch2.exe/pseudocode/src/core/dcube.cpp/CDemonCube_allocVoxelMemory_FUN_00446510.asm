; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_CDemonCube_allocVoxelMemory_FUN_00446510(CDemonCube *this_ptr)
;
; Parameters:
; CDemonCube *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dtrace.cpp_CDemonRaytrace_restoreShadowBitFromBuffer_FUN_00477550 at 0047763b
;   core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_00477430 at 0047751c
;
; Referenced Globals:
;   TerminatedCString s_core_dcube_cpp_005ce806
;   TerminatedCString s_CDemonCube_allocMemory_O_005ce818
;   TerminatedCString s_core_dcube_cpp_005ce846
;   TerminatedCString s_CDemonCube_allocMemory_O_005ce858
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_unknown.c_FUN_005b98d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00446510
        ;   Label: core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_00446510
    PUSH EBP                            ; 00446511
    MOV EBX,dword ptr [ESP + 0xc]       ; 00446512
    PUSH 0x1                            ; 00446516
    PUSH 0x40                           ; 00446518
    CALL crt_unknown.c_FUN_005b98d0     ; 0044651a
        ;   XREF to: 005b98d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b98d0()
    ADD ESP,0x8                         ; 0044651f
    MOV dword ptr [EBX],EAX             ; 00446522
    TEST EAX,EAX                        ; 00446524
    JNZ 0x0044654d                      ; 00446526
        ;   XREF to: 0044654d (CONDITIONAL_JUMP)  ; LAB_0044654d
    PUSH ESI                            ; 00446528
    MOV ECX,0x5ce806                    ; 00446529 | = "..\\core\\dcube.cpp"
    MOV ESI,0x5f3                       ; 0044652e
    PUSH 0x5ce818                       ; 00446533 | = "CDemonCube::allocMemory - Out of voxe..."
    MOV dword ptr [0x01d046a0],ECX      ; 00446538 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0044653e | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00446544
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00446549
    POP ESI                             ; 0044654c
    PUSH 0x1                            ; 0044654d
        ;   Label: LAB_0044654d
    PUSH 0x40                           ; 0044654f
    CALL crt_unknown.c_FUN_005b98d0     ; 00446551
        ;   XREF to: 005b98d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b98d0()
    ADD ESP,0x8                         ; 00446556
    MOV dword ptr [EBX + 0x4],EAX       ; 00446559
    TEST EAX,EAX                        ; 0044655c
    JZ 0x00446563                       ; 0044655e
        ;   XREF to: 00446563 (CONDITIONAL_JUMP)  ; LAB_00446563
    POP EBP                             ; 00446560
    POP EBX                             ; 00446561
    RET                                 ; 00446562
    MOV EBP,0x5ce846                    ; 00446563 | = "..\\core\\dcube.cpp"
        ;   Label: LAB_00446563
    MOV EAX,0x5f5                       ; 00446568
    PUSH 0x5ce858                       ; 0044656d | = "CDemonCube::allocMemory - Out of voxe..."
    MOV dword ptr [0x01d046a0],EBP      ; 00446572 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00446578 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0044657d
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00446582
    POP EBP                             ; 00446585
    POP EBX                             ; 00446586
    RET                                 ; 00446587

