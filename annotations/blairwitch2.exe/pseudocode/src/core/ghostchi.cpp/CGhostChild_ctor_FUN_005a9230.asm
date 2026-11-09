; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGhostChild * core_ghostchi_cpp_CGhostChild_ctor_FUN_005a9230(CGhostChild *this_ptr)
;
; Parameters:
; CGhostChild *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_ghostchi.cpp_factoryFuncGhostChild_FUN_005a9200 at 005a9213
;
; Called Functions:
;   core_ghostchi.cpp_FUN_005a94c0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;   unkaddr_0059d350.cpp_FUN_0059d6f0
;   unkaddr_0059d350.cpp_FUN_0059d7f0
;   unkaddr_0059d350.cpp_FUN_0059d990
;   unkaddr_0059d350.cpp_FUN_0059dc80
;   unkafter_basicene.cpp_FUN_0059e3b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9230
        ;   Label: core_ghostchi.cpp_CGhostChild_ctor_FUN_005a9230
    PUSH ESI                            ; 005a9231
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a9232
    PUSH EDX                            ; 005a9236
    CALL unkafter_basicene.cpp_FUN_0059e3b0 ; 005a9237
        ;   XREF to: 0059e3b0 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_0059e3b0()
    ADD ESP,0x4                         ; 005a923c
    PUSH 0x5f08b3                       ; 005a923f
    MOV EBX,EAX                         ; 005a9244
    LEA ESI,[EAX + 0x2b4]               ; 005a9246
    PUSH ESI                            ; 005a924c
    MOV dword ptr [EAX + 0x2b0],0x6006c4 ; 005a924d
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 005a9257
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x3434],0x3f000000 ; 005a925c
    MOV dword ptr [EBX + 0x1134c],0x40200000 ; 005a9266
    MOV dword ptr [EBX + 0xfc],0x1      ; 005a9270
    MOV dword ptr [EBX + 0x113c4],0x3f800000 ; 005a927a
    MOV dword ptr [EBX + 0x2a8],0x3dcccccd ; 005a9284
    MOV dword ptr [EBX + 0x11380],0x0   ; 005a928e
    MOV dword ptr [EBX + 0x11384],0x0   ; 005a9298
    MOV dword ptr [EBX + 0x11388],0x1   ; 005a92a2
    MOV dword ptr [EBX + 0x1138c],0x2   ; 005a92ac
    MOV dword ptr [EBX + 0x11390],0x0   ; 005a92b6
    ADD ESP,0x8                         ; 005a92c0
    MOV dword ptr [EBX + 0x1185c],0x0   ; 005a92c3
    PUSH 0x0                            ; 005a92cd
    MOV dword ptr [EBX + 0x11860],0x40a00000 ; 005a92cf
    PUSH 0x0                            ; 005a92d9
    MOV dword ptr [EBX + 0x11864],0x0   ; 005a92db
    PUSH EBX                            ; 005a92e5
    MOV dword ptr [EBX + 0x11858],0x0   ; 005a92e6
    CALL core_ghostchi.cpp_FUN_005a94c0 ; 005a92f0
        ;   XREF to: 005a94c0 (UNCONDITIONAL_CALL)  ; undefined core_ghostchi.cpp_FUN_005a94c0()
    ADD ESP,0xc                         ; 005a92f5
    PUSH 0x5f08c0                       ; 005a92f8
    PUSH 0x5f08c6                       ; 005a92fd
    LEA ESI,[EBX + 0x10af8]             ; 005a9302
    PUSH ESI                            ; 005a9308
    CALL unkaddr_0059d350.cpp_FUN_0059d6f0 ; 005a9309
        ;   XREF to: 0059d6f0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d6f0()
    ADD ESP,0xc                         ; 005a930e
    PUSH 0x5f08d4                       ; 005a9311
    PUSH 0x5f08e0                       ; 005a9316
    PUSH ESI                            ; 005a931b
    CALL unkaddr_0059d350.cpp_FUN_0059d7f0 ; 005a931c
        ;   XREF to: 0059d7f0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d7f0()
    ADD ESP,0xc                         ; 005a9321
    PUSH 0x5f08ee                       ; 005a9324
    PUSH ESI                            ; 005a9329
    CALL unkaddr_0059d350.cpp_FUN_0059d990 ; 005a932a
        ;   XREF to: 0059d990 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d990()
    ADD ESP,0x8                         ; 005a932f
    PUSH ESI                            ; 005a9332
    CALL unkaddr_0059d350.cpp_FUN_0059dc80 ; 005a9333
        ;   XREF to: 0059dc80 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059dc80()
    MOV dword ptr [EBX + 0x10a28],0x1   ; 005a9338
    MOV dword ptr [EBX + 0x280c],0x1    ; 005a9342
    ADD ESP,0x4                         ; 005a934c
    MOV dword ptr [EBX + 0x11348],0x1   ; 005a934f
    MOV EAX,EBX                         ; 005a9359
    MOV dword ptr [EBX + 0x2ac],0x0     ; 005a935b
    POP ESI                             ; 005a9365
    POP EBX                             ; 005a9366
    RET                                 ; 005a9367

