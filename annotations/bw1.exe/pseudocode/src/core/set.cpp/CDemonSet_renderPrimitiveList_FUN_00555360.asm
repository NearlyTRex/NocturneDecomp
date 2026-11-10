; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_renderPrimitiveList_FUN_00555360(CDemonSet *this_ptr,SMRGLHeaderPrimitive *primitive_array,int primitive_count)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   primitive_array
; int              Stack[0xc]:4   primitive_count
;
; XREF[1]:
;   core_dcube.cpp_buildAndRenderTrianglePrimitive_FUN_00457af0 at 00457b51
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01bc1224
;   undefined4 g_CGameInstance.field476_0x20c
;
; Called Functions:
;   core_mirror.cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_00519ba0
;   engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00555360
        ;   Label: core_set.cpp_CDemonSet_renderPrimitiveList_FUN_00555360
    PUSH ESI                            ; 00555361
    PUSH EDI                            ; 00555362
    PUSH EBP                            ; 00555363
    MOV EBP,dword ptr [ESP + 0x14]      ; 00555364
    MOV EAX,dword ptr [ESP + 0x18]      ; 00555368
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0055536c
    MOV EBX,dword ptr [0x0061d95c]      ; 00555370 | g_CGamePtr
    CMP dword ptr [EBX + 0x20c],0x0     ; 00555376 | g_CGameInstance.field476_0x20c
    JNZ 0x005553b0                      ; 0055537d
        ;   XREF to: 005553b0 (CONDITIONAL_JUMP)  ; LAB_005553b0
    MOV EBX,dword ptr [0x00612560]      ; 0055537f | DAT_00612560
    MOV EBX,dword ptr [EBX + 0x18]      ; 00555385 | DAT_01bc1224
    TEST EBX,EBX                        ; 00555388
    JZ 0x005553b5                       ; 0055538a
        ;   XREF to: 005553b5 (CONDITIONAL_JUMP)  ; LAB_005553b5
    XOR EBX,EBX                         ; 0055538c
    TEST EDI,EDI                        ; 0055538e
    JLE 0x005553b0                      ; 00555390
        ;   XREF to: 005553b0 (CONDITIONAL_JUMP)  ; LAB_005553b0
    MOV ESI,EAX                         ; 00555392
    PUSH ESI                            ; 00555394
        ;   Label: LAB_00555394
    MOV EAX,dword ptr [EBP + 0x161668]  ; 00555395
    PUSH EAX                            ; 0055539b
    INC EBX                             ; 0055539c
    CALL core_mirror.cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_00519ba0 ; 0055539d
        ;   XREF to: 00519ba0 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_00519ba0(CMirror * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESI,0x28                        ; 005553a2
    ADD ESP,0x8                         ; 005553a5
    CMP EBX,EDI                         ; 005553a8
    JL 0x00555394                       ; 005553aa
        ;   XREF to: 00555394 (CONDITIONAL_JUMP)  ; LAB_00555394
    LEA EAX,[EAX]                       ; 005553ac
    POP EBP                             ; 005553b0
        ;   Label: LAB_005553b0
    POP EDI                             ; 005553b1
    POP ESI                             ; 005553b2
    POP EBX                             ; 005553b3
    RET                                 ; 005553b4
    XOR ESI,ESI                         ; 005553b5
        ;   Label: LAB_005553b5
    TEST EDI,EDI                        ; 005553b7
    JLE 0x005553b0                      ; 005553b9
        ;   XREF to: 005553b0 (CONDITIONAL_JUMP)  ; LAB_005553b0
    MOV EBX,EAX                         ; 005553bb
    PUSH EBX                            ; 005553bd
        ;   Label: LAB_005553bd
    MOV ECX,dword ptr [0x00612560]      ; 005553be | DAT_00612560
    PUSH ECX                            ; 005553c4 | DAT_01bc120c
    INC ESI                             ; 005553c5
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80 ; 005553c6
        ;   XREF to: 00481b80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD EBX,0x28                        ; 005553cb
    ADD ESP,0x8                         ; 005553ce
    CMP ESI,EDI                         ; 005553d1
    JL 0x005553bd                       ; 005553d3
        ;   XREF to: 005553bd (CONDITIONAL_JUMP)  ; LAB_005553bd
    POP EBP                             ; 005553d5
    POP EDI                             ; 005553d6
    POP ESI                             ; 005553d7
    POP EBX                             ; 005553d8
    RET                                 ; 005553d9

