; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_drip_cpp_CDrip_propertyDisplayCallback_FUN_0048e830(CDrip *this_ptr,CActorProperty *property,char *output_buffer)
;
; Parameters:
; CDrip *          Stack[0x4]:4   this_ptr
; CActorProperty * Stack[0x8]:4   property
; char *           Stack[0xc]:4   output_buffer
;
; XREF[1]:
;   core_drip.cpp_CDrip_getPropertyList_FUN_0048e930 at 0048e949
;
; Referenced Globals:
;   TerminatedCString s_Water_006222bb
;   undefined4 s_ater_006222bc
;   undefined4 s_ter_006222bd
;   undefined4 s_er_006222be
;   TerminatedCString s_Lava_006222c1
;   undefined4 s_ava_006222c1+1
;   undefined4 s_va_006222c1+2
;   undefined4 s_a_006222c1+3
;   TerminatedCString s_Stalagwhatever_006222c6
;   undefined4 s_talagwhatever_006222c7
;   undefined4 s_alagwhatever_006222c8
;   undefined4 s_lagwhatever_006222c9
;   undefined4 g_CDripClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0048e830
        ;   Label: core_drip.cpp_CDrip_propertyDisplayCallback_FUN_0048e830
    PUSH EDI                            ; 0048e831
    MOV EDI,dword ptr [ESP + 0x14]      ; 0048e832
    MOV EDX,dword ptr [0x02c9b16c]      ; 0048e836 | g_CDripClassInfo.name_hash
    PUSH EDX                            ; 0048e83c
    MOV ECX,dword ptr [ESP + 0x10]      ; 0048e83d
    PUSH ECX                            ; 0048e841
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0048e842
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ESI,dword ptr [EAX + 0x2d4]     ; 0048e847
    ADD ESP,0x8                         ; 0048e84d
    CMP ESI,0x1                         ; 0048e850
    JNC 0x0048e8c2                      ; 0048e853
        ;   XREF to: 0048e8c2 (CONDITIONAL_JUMP)  ; LAB_0048e8c2
    TEST ESI,ESI                        ; 0048e855
    JZ 0x0048e85c                       ; 0048e857
        ;   XREF to: 0048e85c (CONDITIONAL_JUMP)  ; LAB_0048e85c
    POP EDI                             ; 0048e859
    POP ESI                             ; 0048e85a
    RET                                 ; 0048e85b
    MOV ESI,0x6222bb                    ; 0048e85c | = "Water"
        ;   Label: LAB_0048e85c
    PUSH EDI                            ; 0048e861
    MOV AL,byte ptr [ESI]               ; 0048e862 | = "Water" | s_ter_006222bd
        ;   Label: LAB_0048e862
    MOV byte ptr [EDI],AL               ; 0048e864
    CMP AL,0x0                          ; 0048e866
    JZ 0x0048e87a                       ; 0048e868
        ;   XREF to: 0048e87a (CONDITIONAL_JUMP)  ; LAB_0048e87a
    MOV AL,byte ptr [ESI + 0x1]         ; 0048e86a | s_ater_006222bc | s_er_006222be
    ADD ESI,0x2                         ; 0048e86d
    MOV byte ptr [EDI + 0x1],AL         ; 0048e870
    ADD EDI,0x2                         ; 0048e873
    CMP AL,0x0                          ; 0048e876
    JNZ 0x0048e862                      ; 0048e878
        ;   XREF to: 0048e862 (CONDITIONAL_JUMP)  ; LAB_0048e862
    POP EDI                             ; 0048e87a
        ;   Label: LAB_0048e87a
    POP EDI                             ; 0048e87b
    POP ESI                             ; 0048e87c
    RET                                 ; 0048e87d
    MOV ESI,0x6222c1                    ; 0048e87e | = "Lava"
        ;   Label: LAB_0048e87e
    PUSH EDI                            ; 0048e883
    MOV AL,byte ptr [ESI]               ; 0048e884 | = "Lava" | s_va_006222c1+2
        ;   Label: LAB_0048e884
    MOV byte ptr [EDI],AL               ; 0048e886
    CMP AL,0x0                          ; 0048e888
    JZ 0x0048e89c                       ; 0048e88a
        ;   XREF to: 0048e89c (CONDITIONAL_JUMP)  ; LAB_0048e89c
    MOV AL,byte ptr [ESI + 0x1]         ; 0048e88c | s_ava_006222c1+1 | s_a_006222c1+3
    ADD ESI,0x2                         ; 0048e88f
    MOV byte ptr [EDI + 0x1],AL         ; 0048e892
    ADD EDI,0x2                         ; 0048e895
    CMP AL,0x0                          ; 0048e898
    JNZ 0x0048e884                      ; 0048e89a
        ;   XREF to: 0048e884 (CONDITIONAL_JUMP)  ; LAB_0048e884
    POP EDI                             ; 0048e89c
        ;   Label: LAB_0048e89c
    POP EDI                             ; 0048e89d
    POP ESI                             ; 0048e89e
    RET                                 ; 0048e89f
    MOV ESI,0x6222c6                    ; 0048e8a0 | = "Stalagwhatever"
        ;   Label: LAB_0048e8a0
    PUSH EDI                            ; 0048e8a5
    MOV AL,byte ptr [ESI]               ; 0048e8a6 | = "Stalagwhatever" | s_alagwhatever_006222c8
        ;   Label: LAB_0048e8a6
    MOV byte ptr [EDI],AL               ; 0048e8a8
    CMP AL,0x0                          ; 0048e8aa
    JZ 0x0048e8be                       ; 0048e8ac
        ;   XREF to: 0048e8be (CONDITIONAL_JUMP)  ; LAB_0048e8be
    MOV AL,byte ptr [ESI + 0x1]         ; 0048e8ae | s_talagwhatever_006222c7 | s_lagwhatever_006222c9
    ADD ESI,0x2                         ; 0048e8b1
    MOV byte ptr [EDI + 0x1],AL         ; 0048e8b4
    ADD EDI,0x2                         ; 0048e8b7
    CMP AL,0x0                          ; 0048e8ba
    JNZ 0x0048e8a6                      ; 0048e8bc
        ;   XREF to: 0048e8a6 (CONDITIONAL_JUMP)  ; LAB_0048e8a6
    POP EDI                             ; 0048e8be
        ;   Label: LAB_0048e8be
    POP EDI                             ; 0048e8bf
    POP ESI                             ; 0048e8c0
    RET                                 ; 0048e8c1
    JBE 0x0048e87e                      ; 0048e8c2
        ;   XREF to: 0048e87e (CONDITIONAL_JUMP)  ; LAB_0048e87e
        ;   Label: LAB_0048e8c2
    CMP ESI,0x2                         ; 0048e8c4
    JZ 0x0048e8a0                       ; 0048e8c7
        ;   XREF to: 0048e8a0 (CONDITIONAL_JUMP)  ; LAB_0048e8a0
    POP EDI                             ; 0048e8c9
    POP ESI                             ; 0048e8ca
    RET                                 ; 0048e8cb

