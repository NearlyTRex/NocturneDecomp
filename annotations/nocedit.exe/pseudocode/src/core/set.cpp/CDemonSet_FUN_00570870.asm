; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_set.cpp_CDemonSet_FUN_00570870(CDemonSet * this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModel_renderParts_FUN_0059abf0 at 0059ad25
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CGame* g_CGamePtr = 02d81a9c
;   CDemonRenderer g_CDemonRendererInstance
;   CGame g_CGameInstance
;   undefined4 DAT_02d81c8c
;   undefined4 DAT_02d81c90
;
; Called Functions:
;   core_set.cpp_FUN_005702b0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0048d170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570870
        ;   Label: core_set.cpp_CDemonSet_FUN_00570870
    PUSH EBP                            ; 00570871
    MOV EAX,[0x0067b654]                ; 00570872 | CGame g_CGameInstance | CGame * g_CGamePtr
    CMP dword ptr [EAX + 0x1f0],0x0     ; 00570877 | DAT_02d81c8c
    JNZ 0x005708ba                      ; 0057087e | LAB_005708ba
        ;   XREF to: 005708ba (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x1f4],0x0     ; 00570880 | DAT_02d81c90
    JZ 0x0057089c                       ; 00570887 | LAB_0057089c
        ;   XREF to: 0057089c (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [0x006703ec]      ; 00570889 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EBX                            ; 0057088f | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 00570890 | int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00570895
    TEST EAX,EAX                        ; 00570898
    JZ 0x005708bd                       ; 0057089a | LAB_005708bd
        ;   XREF to: 005708bd (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x18]      ; 0057089c
        ;   Label: LAB_0057089c
    PUSH EAX                            ; 005708a0
    MOV EDX,dword ptr [ESP + 0x18]      ; 005708a1
    PUSH EDX                            ; 005708a5
    MOV ECX,dword ptr [ESP + 0x18]      ; 005708a6
    PUSH ECX                            ; 005708aa
    MOV EBX,dword ptr [0x006703ec]      ; 005708ab | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EBX                            ; 005708b1 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0048d170 ; 005708b2 | void engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0048d170(CDemonRenderer * this_ptr, SInputFace * face_array, int face_count, int render_flags)
        ;   XREF to: 0048d170 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005708b7
    POP EBP                             ; 005708ba
        ;   Label: LAB_005708ba
    POP EBX                             ; 005708bb
    RET                                 ; 005708bc
    PUSH EDI                            ; 005708bd
        ;   Label: LAB_005708bd
    PUSH ESI                            ; 005708be
    PUSH 0xffff                         ; 005708bf
    MOV ESI,dword ptr [ESP + 0x20]      ; 005708c4
    PUSH ESI                            ; 005708c8
    MOV EDI,dword ptr [ESP + 0x20]      ; 005708c9
    PUSH EDI                            ; 005708cd
    MOV EBP,dword ptr [ESP + 0x20]      ; 005708ce
    PUSH EBP                            ; 005708d2
    CALL core_set.cpp_FUN_005702b0      ; 005708d3 | undefined core_set.cpp_FUN_005702b0()
        ;   XREF to: 005702b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005708d8
    POP ESI                             ; 005708db
    POP EDI                             ; 005708dc
    POP EBP                             ; 005708dd
    POP EBX                             ; 005708de
    RET                                 ; 005708df

