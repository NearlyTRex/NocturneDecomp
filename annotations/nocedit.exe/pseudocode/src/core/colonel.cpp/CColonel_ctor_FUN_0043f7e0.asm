; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CColonel * core_colonel.cpp_CColonel_ctor_FUN_0043f7e0(CColonel * this_ptr)
;
; Parameters:
; CColonel *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_colonel.cpp_FUN_0043f7a0 at 0043f7ba
;
; Referenced Globals:
;   TerminatedCString s_colonel_dfm_00618b8e
;   CDemonActor_vtable PTR_core_colonel.cpp_FUN_0065bd54
;
; Called Functions:
;   core_hero.cpp_FUN_004f2340
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043f7e0
        ;   Label: core_colonel.cpp_CColonel_ctor_FUN_0043f7e0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0043f7e1
    PUSH EDX                            ; 0043f7e5
    CALL core_hero.cpp_FUN_004f2340     ; 0043f7e6
        ;   XREF to: 004f2340 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004f2340()
    MOV EBX,EAX                         ; 0043f7eb
    ADD EAX,0x158                       ; 0043f7ed
    ADD ESP,0x4                         ; 0043f7f2
    MOV dword ptr [EAX + -0x4],0x65bd54 ; 0043f7f5 | PTR_core_colonel.cpp_FUN_0065bd54
    PUSH 0x618b8e                       ; 0043f7fc | = "colonel.dfm"
    MOV dword ptr [EAX + 0x1fa7c],0x0   ; 0043f801
    PUSH EAX                            ; 0043f80b
    MOV dword ptr [EAX + 0x1fa80],0x0   ; 0043f80c
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 0043f816
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    LEA EAX,[EBX + 0x1fbdc]             ; 0043f81b
    MOV dword ptr [EBX + 0x1fbe8],0x3f800000 ; 0043f821
    MOV dword ptr [EAX + 0x8],0x0       ; 0043f82b
    ADD ESP,0x8                         ; 0043f832
    MOV EDX,dword ptr [EAX + 0x8]       ; 0043f835
    MOV dword ptr [EAX + 0x4],EDX       ; 0043f838
    MOV EDX,dword ptr [EAX + 0x4]       ; 0043f83b
    MOV dword ptr [EAX],EDX             ; 0043f83e
    MOV EAX,EBX                         ; 0043f840
    POP EBX                             ; 0043f842
    RET                                 ; 0043f843

