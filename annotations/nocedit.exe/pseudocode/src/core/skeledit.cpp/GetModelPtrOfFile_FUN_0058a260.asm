; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_skeledit_cpp_GetModelPtrOfFile_FUN_0058a260(CDeformableModelInstance *param_1,_FILE *param_2)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   param_1
; _FILE *          Stack[0x8]:4   param_2
;
; XREF[25]:
;   core_armour.cpp_CArmour_writeDependencies_FUN_004124d0 at 004124f2
;   core_batcreat.cpp_CBatCreature_writeDependencies_FUN_004162f0 at 00416312
;   core_batman.cpp_CBatman_writeDependencies_FUN_00417d30 at 00417d52
;   core_beast.cpp_CBeast_writeDependencies_FUN_00418460 at 00418482
;   core_biggs.cpp_CBiggs_writeDependencies_FUN_00418ce0 at 00418d02
;   core_boneguy.cpp_CBoneGuy_writeDependencies_FUN_0041da10 at 0041da32
;   core_bride.cpp_CBride_writeDependencies_FUN_00424b50 at 00424b72
;   core_cow.cpp_FUN_00444ca0 at 00444cc2
;   core_dog.cpp_CZombieDog_writeDependencies_FUN_0047f970 at 0047f992
;   core_dracbrid.cpp_FUN_00486d00 at 00486d22
;   ... and 15 more
;
; Referenced Globals:
;   TerminatedCString s_MODELS_s_0064a24d
;
; Called Functions:
;   core_skeledit.cpp_FUN_0058a2b0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   crt_stack.c___STK_FUN_005ff9f3
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH 0x14                           ; 0058a260
        ;   Label: core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 0058a265
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; uint crt_stack.c___STK_FUN_005ff9f3(uint stack_size)
    PUSH EBX                            ; 0058a26a
    MOV EAX,dword ptr [ESP + 0x8]       ; 0058a26b
    ADD EAX,0x2260                      ; 0058a26f
    PUSH EAX                            ; 0058a274
    PUSH 0x64a24d                       ; 0058a275 | = "MODELS\\%s\n"
    MOV EDX,dword ptr [ESP + 0x14]      ; 0058a27a
    PUSH EDX                            ; 0058a27e
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058a27f
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0058a284
    MOV ECX,dword ptr [ESP + 0xc]       ; 0058a287
    PUSH ECX                            ; 0058a28b
    MOV EBX,dword ptr [ESP + 0xc]       ; 0058a28c
    PUSH EBX                            ; 0058a290
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 0058a291
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0058a296
    PUSH EAX                            ; 0058a299
    CALL core_skeledit.cpp_FUN_0058a2b0 ; 0058a29a
        ;   XREF to: 0058a2b0 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_FUN_0058a2b0()
    ADD ESP,0x8                         ; 0058a29f
    POP EBX                             ; 0058a2a2
    RET                                 ; 0058a2a3

