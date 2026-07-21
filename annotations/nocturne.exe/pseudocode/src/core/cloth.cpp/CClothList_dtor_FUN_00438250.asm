; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_cloth_cpp_CClothList_dtor_FUN_00438250(undefined4 param_1)
;
;
; XREF[36]:
;   FUN_004132c0 at 00413319
;   FUN_00414c60 at 00414cb9
;   FUN_00415250 at 004152a9
;   FUN_00415a30 at 00415a99
;   FUN_00420f20 at 00420f79
;   FUN_00423d90 at 00423df9
;   FUN_0043c6f0 at 0043c749
;   FUN_00454f30 at 00454f89
;   FUN_0045b350 at 0045b3a9
;   FUN_00463310 at 00463369
;   ... and 26 more
;
; Called Functions:
;   core_cloth.cpp_CClothList_reset_FUN_00438320
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438250
        ;   Label: core_cloth.cpp_CClothList_dtor_FUN_00438250
    MOV EBX,dword ptr [ESP + 0x8]       ; 00438251
    PUSH EBX                            ; 00438255
    CALL core_cloth.cpp_CClothList_reset_FUN_00438320 ; 00438256
        ;   XREF to: 00438320 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_CClothList_reset_FUN_00438320()
    ADD ESP,0x4                         ; 0043825b
    MOV EAX,EBX                         ; 0043825e
    POP EBX                             ; 00438260
    RET                                 ; 00438261

