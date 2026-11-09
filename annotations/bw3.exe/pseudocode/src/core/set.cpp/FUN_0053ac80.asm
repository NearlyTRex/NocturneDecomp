; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_FUN_0053ac80(CDemonSet *this_ptr,SInputFace *faces,int count,int flags)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; SInputFace *     Stack[0x8]:4   faces
; int              Stack[0xc]:4   count
; int              Stack[0x10]:4   flags
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModel_renderParts_FUN_00548c70 at 00548da5
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 DAT_01bdd7e4
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.field532_0x214
;   undefined4 g_CGameInstance.field536_0x218
;
; Called Functions:
;   core_set.cpp_FUN_0053a6c0
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540
;   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0046dbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053ac80
        ;   Label: core_set.cpp_FUN_0053ac80
    PUSH EBP                            ; 0053ac81
    MOV EAX,[0x005fe9dc]                ; 0053ac82 | g_CGamePtr | g_CGameInstance
    CMP dword ptr [EAX + 0x214],0x0     ; 0053ac87 | g_CGameInstance.field532_0x214
    JNZ 0x0053acca                      ; 0053ac8e
        ;   XREF to: 0053acca (CONDITIONAL_JUMP)  ; LAB_0053acca
    CMP dword ptr [EAX + 0x218],0x0     ; 0053ac90 | g_CGameInstance.field536_0x218
    JZ 0x0053acac                       ; 0053ac97
        ;   XREF to: 0053acac (CONDITIONAL_JUMP)  ; LAB_0053acac
    MOV EBX,dword ptr [0x005f2afc]      ; 0053ac99 | DAT_005f2afc
    PUSH EBX                            ; 0053ac9f | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540 ; 0053aca0
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0053aca5
    TEST EAX,EAX                        ; 0053aca8
    JZ 0x0053accd                       ; 0053acaa
        ;   XREF to: 0053accd (CONDITIONAL_JUMP)  ; LAB_0053accd
    MOV EAX,dword ptr [ESP + 0x18]      ; 0053acac
        ;   Label: LAB_0053acac
    PUSH EAX                            ; 0053acb0
    MOV EDX,dword ptr [ESP + 0x18]      ; 0053acb1
    PUSH EDX                            ; 0053acb5
    MOV ECX,dword ptr [ESP + 0x18]      ; 0053acb6
    PUSH ECX                            ; 0053acba
    MOV EBX,dword ptr [0x005f2afc]      ; 0053acbb | DAT_005f2afc
    PUSH EBX                            ; 0053acc1 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0046dbd0 ; 0053acc2
        ;   XREF to: 0046dbd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0046dbd0(CDemonRenderer * this_ptr, SInputFace * face_array, int face_count, int render_flags)
    ADD ESP,0x10                        ; 0053acc7
    POP EBP                             ; 0053acca
        ;   Label: LAB_0053acca
    POP EBX                             ; 0053accb
    RET                                 ; 0053accc
    PUSH EDI                            ; 0053accd
        ;   Label: LAB_0053accd
    PUSH ESI                            ; 0053acce
    PUSH 0xffff                         ; 0053accf
    MOV ESI,dword ptr [ESP + 0x20]      ; 0053acd4
    PUSH ESI                            ; 0053acd8
    MOV EDI,dword ptr [ESP + 0x20]      ; 0053acd9
    PUSH EDI                            ; 0053acdd
    MOV EBP,dword ptr [ESP + 0x20]      ; 0053acde
    PUSH EBP                            ; 0053ace2
    CALL core_set.cpp_FUN_0053a6c0      ; 0053ace3
        ;   XREF to: 0053a6c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_0053a6c0(CDemonSet * this_ptr, SInputFace * face_data, int count, int alpha)
    ADD ESP,0x10                        ; 0053ace8
    POP ESI                             ; 0053aceb
    POP EDI                             ; 0053acec
    POP EBP                             ; 0053aced
    POP EBX                             ; 0053acee
    RET                                 ; 0053acef

