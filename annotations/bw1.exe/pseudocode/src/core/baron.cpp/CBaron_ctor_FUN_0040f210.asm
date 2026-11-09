; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBaron * __cdecl core_baron_cpp_CBaron_ctor_FUN_0040f210(CBaron *this_ptr)
;
; Parameters:
; CBaron *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_baron.cpp_factoryFuncBaron_FUN_0040f1e0 at 0040f1f3
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;   core_hero.cpp_FUN_004ea830
;   core_skeleton.cpp_FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f210
        ;   Label: core_baron.cpp_CBaron_ctor_FUN_0040f210
    PUSH ESI                            ; 0040f211
    PUSH EDI                            ; 0040f212
    MOV EDX,dword ptr [ESP + 0x10]      ; 0040f213
    PUSH EDX                            ; 0040f217
    CALL core_hero.cpp_FUN_004ea830     ; 0040f218
        ;   XREF to: 004ea830 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_FUN_004ea830(CHero * this_ptr)
    ADD ESP,0x4                         ; 0040f21d
    PUSH 0x5d337e                       ; 0040f220
    MOV EBX,EAX                         ; 0040f225
    ADD EAX,0x158                       ; 0040f227
    PUSH EAX                            ; 0040f22c
    MOV dword ptr [EAX + -0x4],0x5fbac4 ; 0040f22d
    CALL core_skeleton.cpp_FUN_00569f50 ; 0040f234
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569f50()
    LEA EAX,[EBX + 0x20074]             ; 0040f239
    MOV dword ptr [EBX + 0x20080],0x3f800000 ; 0040f23f
    MOV dword ptr [EAX + 0x8],0x0       ; 0040f249
    MOV EDX,dword ptr [EAX + 0x8]       ; 0040f250
    MOV dword ptr [EAX + 0x4],EDX       ; 0040f253
    MOV EDX,dword ptr [EAX + 0x4]       ; 0040f256
    MOV dword ptr [EAX],EDX             ; 0040f259
    MOV dword ptr [EBX + 0x20084],0x0   ; 0040f25b
    MOV ESI,0x5d3388                    ; 0040f265
    MOV dword ptr [EBX + 0x20088],0x0   ; 0040f26a
    ADD ESP,0x8                         ; 0040f274
    MOV dword ptr [EBX + 0xfc],0x1      ; 0040f277
    LEA EDI,[EBX + 0x1ffac]             ; 0040f281
    MOV dword ptr [EBX + 0x200a4],0x0   ; 0040f287
    PUSH EDI                            ; 0040f291
    MOV AL,byte ptr [ESI]               ; 0040f292
        ;   Label: LAB_0040f292
    MOV byte ptr [EDI],AL               ; 0040f294
    CMP AL,0x0                          ; 0040f296
    JZ 0x0040f2aa                       ; 0040f298
        ;   XREF to: 0040f2aa (CONDITIONAL_JUMP)  ; LAB_0040f2aa
    MOV AL,byte ptr [ESI + 0x1]         ; 0040f29a
    ADD ESI,0x2                         ; 0040f29d
    MOV byte ptr [EDI + 0x1],AL         ; 0040f2a0
    ADD EDI,0x2                         ; 0040f2a3
    CMP AL,0x0                          ; 0040f2a6
    JNZ 0x0040f292                      ; 0040f2a8
        ;   XREF to: 0040f292 (CONDITIONAL_JUMP)  ; LAB_0040f292
    POP EDI                             ; 0040f2aa
        ;   Label: LAB_0040f2aa
    MOV ESI,0x5d338d                    ; 0040f2ab
    LEA EDI,[EBX + 0x20010]             ; 0040f2b0
    PUSH EDI                            ; 0040f2b6
    MOV AL,byte ptr [ESI]               ; 0040f2b7
        ;   Label: LAB_0040f2b7
    MOV byte ptr [EDI],AL               ; 0040f2b9
    CMP AL,0x0                          ; 0040f2bb
    JZ 0x0040f2cf                       ; 0040f2bd
        ;   XREF to: 0040f2cf (CONDITIONAL_JUMP)  ; LAB_0040f2cf
    MOV AL,byte ptr [ESI + 0x1]         ; 0040f2bf
    ADD ESI,0x2                         ; 0040f2c2
    MOV byte ptr [EDI + 0x1],AL         ; 0040f2c5
    ADD EDI,0x2                         ; 0040f2c8
    CMP AL,0x0                          ; 0040f2cb
    JNZ 0x0040f2b7                      ; 0040f2cd
        ;   XREF to: 0040f2b7 (CONDITIONAL_JUMP)  ; LAB_0040f2b7
    POP EDI                             ; 0040f2cf
        ;   Label: LAB_0040f2cf
    PUSH 0x5d3392                       ; 0040f2d0
    PUSH 0x7c351c                       ; 0040f2d5
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 0040f2da
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0040f2df
    MOV EAX,EBX                         ; 0040f2e2
    MOV dword ptr [EBX + 0x200a8],0x0   ; 0040f2e4
    POP EDI                             ; 0040f2ee
    POP ESI                             ; 0040f2ef
    POP EBX                             ; 0040f2f0
    RET                                 ; 0040f2f1

