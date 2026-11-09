; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gabriela_cpp_FUN_004c9990(CGabriella *this_ptr)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_gabriela.cpp_FUN_004c83b0 at 004c884d
;
; Referenced Globals:
;   undefined4 g_CAmmoBoxClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_ammobox.cpp_FUN_0040e210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c9990
        ;   Label: core_gabriela.cpp_FUN_004c9990
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c9991
    MOV EDX,dword ptr [EBX + 0x1ff78]   ; 004c9995
    TEST EDX,EDX                        ; 004c999b
    JNZ 0x004c99a1                      ; 004c999d
        ;   XREF to: 004c99a1 (CONDITIONAL_JUMP)  ; LAB_004c99a1
    POP EBX                             ; 004c999f
    RET                                 ; 004c99a0
    MOV ECX,dword ptr [0x007c33e0]      ; 004c99a1 | g_CAmmoBoxClassInfo.name_hash
        ;   Label: LAB_004c99a1
    PUSH ECX                            ; 004c99a7
    PUSH EDX                            ; 004c99a8
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004c99a9
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004c99ae
    TEST EAX,EAX                        ; 004c99b1
    JZ 0x004c99c5                       ; 004c99b3
        ;   XREF to: 004c99c5 (CONDITIONAL_JUMP)  ; LAB_004c99c5
    LEA EDX,[EBX + 0x1fae8]             ; 004c99b5
    PUSH EDX                            ; 004c99bb
    PUSH EAX                            ; 004c99bc
    CALL core_ammobox.cpp_FUN_0040e210  ; 004c99bd
        ;   XREF to: 0040e210 (UNCONDITIONAL_CALL)  ; void core_ammobox.cpp_FUN_0040e210(CAmmoBox * this_ptr, CInventory * inventory)
    ADD ESP,0x8                         ; 004c99c2
    MOV dword ptr [EBX + 0x1ff78],0x0   ; 004c99c5
        ;   Label: LAB_004c99c5
    POP EBX                             ; 004c99cf
    RET                                 ; 004c99d0

