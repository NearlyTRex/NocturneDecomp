; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_bodypart_cpp_FUN_0041b1b0(void)
;
;
; XREF[1]:
;   core_bodypart.cpp_CBodyPart_process_FUN_00419be0 at 00419c23
;
; Referenced Globals:
;   CGore* g_CGorePtr = 02d83364
;   CGore g_CGoreInstance
;   CVector3f g_ZeroVector
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040cd10
;   core_gore.cpp_FUN_004edaa0
;
; *****************************************************************************

section .text

    PUSH 0x3da3d70a                     ; 0041b1b0
        ;   Label: core_bodypart.cpp_FUN_0041b1b0
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 0041b1b5
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 0041b1ba
    TEST EAX,EAX                        ; 0041b1bd
    JNZ 0x0041b1c2                      ; 0041b1bf
        ;   XREF to: 0041b1c2 (CONDITIONAL_JUMP)  ; LAB_0041b1c2
    RET                                 ; 0041b1c1
    MOV EAX,dword ptr [ESP + 0x4]       ; 0041b1c2
        ;   Label: LAB_0041b1c2
    MOV EDX,dword ptr [EAX + 0xcb8]     ; 0041b1c6
    PUSH EDX                            ; 0041b1cc
    PUSH 0x3f87558                      ; 0041b1cd | g_ZeroVector
    ADD EAX,0x20                        ; 0041b1d2
    PUSH EAX                            ; 0041b1d5
    MOV ECX,dword ptr [0x0067b9a0]      ; 0041b1d6 | g_CGoreInstance | g_CGorePtr
    PUSH ECX                            ; 0041b1dc | g_CGoreInstance
    CALL core_gore.cpp_FUN_004edaa0     ; 0041b1dd
        ;   XREF to: 004edaa0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_FUN_004edaa0()
    ADD ESP,0x10                        ; 0041b1e2
    RET                                 ; 0041b1e5

