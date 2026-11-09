; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLZWCompress * __cdecl support_codec_cpp_CLZWCompress_ctor_FUN_00434770(CLZWCompress *this_ptr,int buffer_size,int num_bits)
;
; Parameters:
; CLZWCompress *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   buffer_size
; int              Stack[0xc]:4   num_bits
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_00441f50 at 004420f7
;   core_game.cpp_FUN_004bb9b0 at 004bbd0c
;
; Referenced Globals:
;   undefined1* PTR_support_codec.cpp_CLZWCompress_dtor_FUN_00435550_005f4254 = 00435550
;
; Called Functions:
;   support_codec.cpp_CCodec_ctor_FUN_00433e80
;   support_codec.cpp_CLZWDictionary_ctor_FUN_00434250
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00434770
        ;   Label: support_codec.cpp_CLZWCompress_ctor_FUN_00434770
    PUSH EAX                            ; 00434774
    CALL support_codec.cpp_CCodec_ctor_FUN_00433e80 ; 00434775
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_ctor_FUN_00433e80(CCodec * this_ptr)
    ADD ESP,0x4                         ; 0043477a
    ADD EAX,0x4                         ; 0043477d
    PUSH EAX                            ; 00434780
    CALL support_codec.cpp_CLZWDictionary_ctor_FUN_00434250 ; 00434781
        ;   XREF to: 00434250 (UNCONDITIONAL_CALL)  ; CLZWDictionary * support_codec.cpp_CLZWDictionary_ctor_FUN_00434250(CLZWDictionary * this_ptr)
    ADD ESP,0x4                         ; 00434786
    SUB EAX,0x4                         ; 00434789
    MOV EDX,dword ptr [ESP + 0x8]       ; 0043478c
    MOV dword ptr [EAX + 0x20],EDX      ; 00434790
    MOV EDX,dword ptr [ESP + 0xc]       ; 00434793
    MOV dword ptr [EAX + 0x24],EDX      ; 00434797
    MOV EDX,0xffffffff                  ; 0043479a
    MOV CL,byte ptr [EAX + 0x24]        ; 0043479f
    MOV dword ptr [EAX],0x5f4254        ; 004347a2 | PTR_support_codec.cpp_CLZWCompress_dtor_FUN_00435550_005f4254
    SHL EDX,CL                          ; 004347a8
    MOV dword ptr [EAX + 0x28],EDX      ; 004347aa
    NOT EDX                             ; 004347ad
    MOV dword ptr [EAX + 0x28],EDX      ; 004347af
    RET                                 ; 004347b2

