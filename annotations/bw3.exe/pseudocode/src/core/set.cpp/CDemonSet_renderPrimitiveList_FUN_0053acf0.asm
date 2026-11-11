; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_renderPrimitiveList_FUN_0053acf0(CDemonSet *this_ptr,SMRGLHeaderPrimitive *primitive_array,int primitive_count)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   primitive_array
; int              Stack[0xc]:4   primitive_count
;
; XREF[1]:
;   core_dcube.cpp_buildAndRenderTrianglePrimitive_FUN_00453c40 at 00453ca1
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01bdd7fc
;   undefined4 g_CGameInstance.suppress_set_geometry
;
; Called Functions:
;   core_mirror.cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_004f5370
;   engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053acf0
        ;   Label: core_set.cpp_CDemonSet_renderPrimitiveList_FUN_0053acf0
    PUSH ESI                            ; 0053acf1
    PUSH EDI                            ; 0053acf2
    PUSH EBP                            ; 0053acf3
    MOV EBP,dword ptr [ESP + 0x14]      ; 0053acf4
    MOV EAX,dword ptr [ESP + 0x18]      ; 0053acf8
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0053acfc
    MOV EBX,dword ptr [0x005fe9dc]      ; 0053ad00 | g_CGamePtr
    CMP dword ptr [EBX + 0x214],0x0     ; 0053ad06 | g_CGameInstance.suppress_set_geometry
    JNZ 0x0053ad40                      ; 0053ad0d
        ;   XREF to: 0053ad40 (CONDITIONAL_JUMP)  ; LAB_0053ad40
    MOV EBX,dword ptr [0x005f2afc]      ; 0053ad0f | DAT_005f2afc
    MOV EBX,dword ptr [EBX + 0x18]      ; 0053ad15 | DAT_01bdd7fc
    TEST EBX,EBX                        ; 0053ad18
    JZ 0x0053ad45                       ; 0053ad1a
        ;   XREF to: 0053ad45 (CONDITIONAL_JUMP)  ; LAB_0053ad45
    XOR EBX,EBX                         ; 0053ad1c
    TEST EDI,EDI                        ; 0053ad1e
    JLE 0x0053ad40                      ; 0053ad20
        ;   XREF to: 0053ad40 (CONDITIONAL_JUMP)  ; LAB_0053ad40
    MOV ESI,EAX                         ; 0053ad22
    PUSH ESI                            ; 0053ad24
        ;   Label: LAB_0053ad24
    MOV EAX,dword ptr [EBP + 0x161668]  ; 0053ad25
    PUSH EAX                            ; 0053ad2b
    INC EBX                             ; 0053ad2c
    CALL core_mirror.cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_004f5370 ; 0053ad2d
        ;   XREF to: 004f5370 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_004f5370(CMirror * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESI,0x28                        ; 0053ad32
    ADD ESP,0x8                         ; 0053ad35
    CMP EBX,EDI                         ; 0053ad38
    JL 0x0053ad24                       ; 0053ad3a
        ;   XREF to: 0053ad24 (CONDITIONAL_JUMP)  ; LAB_0053ad24
    LEA EAX,[EAX]                       ; 0053ad3c
    POP EBP                             ; 0053ad40
        ;   Label: LAB_0053ad40
    POP EDI                             ; 0053ad41
    POP ESI                             ; 0053ad42
    POP EBX                             ; 0053ad43
    RET                                 ; 0053ad44
    XOR ESI,ESI                         ; 0053ad45
        ;   Label: LAB_0053ad45
    TEST EDI,EDI                        ; 0053ad47
    JLE 0x0053ad40                      ; 0053ad49
        ;   XREF to: 0053ad40 (CONDITIONAL_JUMP)  ; LAB_0053ad40
    MOV EBX,EAX                         ; 0053ad4b
    PUSH EBX                            ; 0053ad4d
        ;   Label: LAB_0053ad4d
    MOV ECX,dword ptr [0x005f2afc]      ; 0053ad4e | DAT_005f2afc
    PUSH ECX                            ; 0053ad54 | DAT_01bdd7e4
    INC ESI                             ; 0053ad55
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240 ; 0053ad56
        ;   XREF to: 0046b240 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD EBX,0x28                        ; 0053ad5b
    ADD ESP,0x8                         ; 0053ad5e
    CMP ESI,EDI                         ; 0053ad61
    JL 0x0053ad4d                       ; 0053ad63
        ;   XREF to: 0053ad4d (CONDITIONAL_JUMP)  ; LAB_0053ad4d
    POP EBP                             ; 0053ad65
    POP EDI                             ; 0053ad66
    POP ESI                             ; 0053ad67
    POP EBX                             ; 0053ad68
    RET                                 ; 0053ad69

