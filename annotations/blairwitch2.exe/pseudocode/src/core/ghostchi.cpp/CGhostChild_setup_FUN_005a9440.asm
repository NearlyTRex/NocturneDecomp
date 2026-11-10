; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ghostchi_cpp_CGhostChild_setup_FUN_005a9440(CGhostChild *this_ptr)
;
; Parameters:
; CGhostChild *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_005f08f8
;   TerminatedCString s_Bip01_R_Hand_005f0903
;
; Called Functions:
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80
;   unkaddr_005a7eb0.cpp_FUN_005a8030
;   unkaddr_005a7eb0.cpp_FUN_005a8050
;   unkaddr_005a7eb0.cpp_FUN_005a80d0
;   unkafter_basicene.cpp_FUN_0059e6a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9440
        ;   Label: core_ghostchi.cpp_CGhostChild_setup_FUN_005a9440
    PUSH ESI                            ; 005a9441
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a9442
    PUSH EBX                            ; 005a9446
    CALL unkafter_basicene.cpp_FUN_0059e6a0 ; 005a9447
        ;   XREF to: 0059e6a0 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_0059e6a0()
    ADD ESP,0x4                         ; 005a944c
    PUSH 0x1                            ; 005a944f
    PUSH 0x5f08f8                       ; 005a9451 | = "Bip01 Head"
    MOV EDX,dword ptr [EBX + 0x113b0]   ; 005a9456
    PUSH EDX                            ; 005a945c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 005a945d
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005a9462
    PUSH 0x1                            ; 005a9465
    PUSH 0x5f0903                       ; 005a9467 | = "Bip01 R Hand"
    MOV ECX,dword ptr [EBX + 0x113b0]   ; 005a946c
    PUSH ECX                            ; 005a9472
    MOV dword ptr [EBX + 0x11850],EAX   ; 005a9473
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 005a9479
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005a947e
    MOV dword ptr [EBX + 0x11854],EAX   ; 005a9481
    PUSH 0x100                          ; 005a9487
    LEA ESI,[EBX + 0x264]               ; 005a948c
    MOV EAX,dword ptr [EBX + 0x11850]   ; 005a9492
    PUSH ESI                            ; 005a9498
    MOV dword ptr [EBX + 0x10a24],EAX   ; 005a9499
    CALL unkaddr_005a7eb0.cpp_FUN_005a8030 ; 005a949f
        ;   XREF to: 005a8030 (UNCONDITIONAL_CALL)  ; undefined unkaddr_005a7eb0.cpp_FUN_005a8030()
    ADD ESP,0x8                         ; 005a94a4
    PUSH EBX                            ; 005a94a7
    PUSH ESI                            ; 005a94a8
    CALL unkaddr_005a7eb0.cpp_FUN_005a8050 ; 005a94a9
        ;   XREF to: 005a8050 (UNCONDITIONAL_CALL)  ; undefined unkaddr_005a7eb0.cpp_FUN_005a8050()
    ADD ESP,0x8                         ; 005a94ae
    PUSH 0x0                            ; 005a94b1
    PUSH ESI                            ; 005a94b3
    CALL unkaddr_005a7eb0.cpp_FUN_005a80d0 ; 005a94b4
        ;   XREF to: 005a80d0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_005a7eb0.cpp_FUN_005a80d0()
    ADD ESP,0x8                         ; 005a94b9
    POP ESI                             ; 005a94bc
    POP EBX                             ; 005a94bd
    RET                                 ; 005a94be

