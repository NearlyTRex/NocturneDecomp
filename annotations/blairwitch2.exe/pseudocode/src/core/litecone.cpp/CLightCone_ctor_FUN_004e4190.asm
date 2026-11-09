; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLightCone * __cdecl core_litecone_cpp_CLightCone_ctor_FUN_004e4190(CLightCone *this_ptr)
;
; Parameters:
; CLightCone *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_litecone.cpp_factoryFuncLightCone_FUN_004e4160 at 004e4173
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408790
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004e4190
        ;   Label: core_litecone.cpp_CLightCone_ctor_FUN_004e4190
    PUSH EDI                            ; 004e4191
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e4192
    PUSH EDX                            ; 004e4196
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408790 ; 004e4197
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408790(CDemonActor * this_ptr)
    MOV dword ptr [EAX + 0x2b0],0x5f9744 ; 004e419c
    MOV ESI,0x5dc105                    ; 004e41a6
    MOV dword ptr [EAX + 0x2b4],0x42600000 ; 004e41ab
    MOV EDX,EAX                         ; 004e41b5
    MOV dword ptr [EAX + 0x2b8],0x40c00000 ; 004e41b7
    ADD ESP,0x4                         ; 004e41c1
    MOV dword ptr [EAX + 0xfc],0x1      ; 004e41c4
    LEA EDI,[EAX + 0x2c0]               ; 004e41ce
    MOV dword ptr [EAX + 0x2bc],0x1     ; 004e41d4
    PUSH EDI                            ; 004e41de
    MOV AL,byte ptr [ESI]               ; 004e41df
        ;   Label: LAB_004e41df
    MOV byte ptr [EDI],AL               ; 004e41e1
    CMP AL,0x0                          ; 004e41e3
    JZ 0x004e41f7                       ; 004e41e5
        ;   XREF to: 004e41f7 (CONDITIONAL_JUMP)  ; LAB_004e41f7
    MOV AL,byte ptr [ESI + 0x1]         ; 004e41e7
    ADD ESI,0x2                         ; 004e41ea
    MOV byte ptr [EDI + 0x1],AL         ; 004e41ed
    ADD EDI,0x2                         ; 004e41f0
    CMP AL,0x0                          ; 004e41f3
    JNZ 0x004e41df                      ; 004e41f5
        ;   XREF to: 004e41df (CONDITIONAL_JUMP)  ; LAB_004e41df
    POP EDI                             ; 004e41f7
        ;   Label: LAB_004e41f7
    MOV ESI,0x5dc10a                    ; 004e41f8
    LEA EDI,[EDX + 0x324]               ; 004e41fd
    PUSH EDI                            ; 004e4203
    MOV AL,byte ptr [ESI]               ; 004e4204
        ;   Label: LAB_004e4204
    MOV byte ptr [EDI],AL               ; 004e4206
    CMP AL,0x0                          ; 004e4208
    JZ 0x004e421c                       ; 004e420a
        ;   XREF to: 004e421c (CONDITIONAL_JUMP)  ; LAB_004e421c
    MOV AL,byte ptr [ESI + 0x1]         ; 004e420c
    ADD ESI,0x2                         ; 004e420f
    MOV byte ptr [EDI + 0x1],AL         ; 004e4212
    ADD EDI,0x2                         ; 004e4215
    CMP AL,0x0                          ; 004e4218
    JNZ 0x004e4204                      ; 004e421a
        ;   XREF to: 004e4204 (CONDITIONAL_JUMP)  ; LAB_004e4204
    POP EDI                             ; 004e421c
        ;   Label: LAB_004e421c
    MOV EAX,EDX                         ; 004e421d
    POP EDI                             ; 004e421f
    POP ESI                             ; 004e4220
    RET                                 ; 004e4221

