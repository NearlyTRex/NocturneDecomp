; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_codec_cpp_CLZWCompress_ctor_FUN_00439830(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[2]:
;   core_dcamera.cpp_FUN_00446810 at 004469bc
;   core_game.cpp_FUN_004a3b90 at 004a3f0a
;
; Referenced Globals:
;   undefined1* PTR_support_codec.cpp_CLZWCompress_dtor_FUN_00439c70_0059b414 = 00439c70
;
; Called Functions:
;   support_codec.cpp_CCodec_ctor_FUN_00438f20
;   support_codec.cpp_CLZWDictionary_ctor_FUN_00439350
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00439830
        ;   Label: support_codec.cpp_CLZWCompress_ctor_FUN_00439830
    PUSH EAX                            ; 00439834
    CALL support_codec.cpp_CCodec_ctor_FUN_00438f20 ; 00439835
        ;   XREF to: 00438f20 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_CCodec_ctor_FUN_00438f20()
    ADD ESP,0x4                         ; 0043983a
    ADD EAX,0x4                         ; 0043983d
    PUSH EAX                            ; 00439840
    CALL support_codec.cpp_CLZWDictionary_ctor_FUN_00439350 ; 00439841
        ;   XREF to: 00439350 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_CLZWDictionary_ctor_FUN_00439350()
    ADD ESP,0x4                         ; 00439846
    SUB EAX,0x4                         ; 00439849
    MOV EDX,dword ptr [ESP + 0x8]       ; 0043984c
    MOV dword ptr [EAX + 0x20],EDX      ; 00439850
    MOV EDX,dword ptr [ESP + 0xc]       ; 00439853
    MOV dword ptr [EAX + 0x24],EDX      ; 00439857
    MOV EDX,0xffffffff                  ; 0043985a
    MOV CL,byte ptr [EAX + 0x24]        ; 0043985f
    MOV dword ptr [EAX],0x59b414        ; 00439862 | PTR_support_codec.cpp_CLZWCompress_dtor_FUN_00439c70_0059b414
    SHL EDX,CL                          ; 00439868
    MOV dword ptr [EAX + 0x28],EDX      ; 0043986a
    NOT EDX                             ; 0043986d
    MOV dword ptr [EAX + 0x28],EDX      ; 0043986f
    RET                                 ; 00439872

