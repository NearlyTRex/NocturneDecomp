; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDoc * core_doc_cpp_CDoc_dtor_FUN_00476700(CDoc *this_ptr,uint flags)
;
; Parameters:
; CDoc *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CDocTypeInfo
;
; Called Functions:
;   core_hero.cpp_FUN_004ea980
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00476700
        ;   Label: core_doc.cpp_CDoc_dtor_FUN_00476700
    MOV EBX,dword ptr [ESP + 0x8]       ; 00476701
    TEST byte ptr [ESP + 0xc],0x4       ; 00476705
    JNZ 0x00476726                      ; 0047670a
        ;   XREF to: 00476726 (CONDITIONAL_JUMP)  ; LAB_00476726
    PUSH 0x1                            ; 0047670c
    PUSH EBX                            ; 0047670e
    CALL core_hero.cpp_FUN_004ea980     ; 0047670f
        ;   XREF to: 004ea980 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004ea980()
    ADD ESP,0x8                         ; 00476714
    MOV DL,byte ptr [ESP + 0xc]         ; 00476717
    MOV EBX,EAX                         ; 0047671b
    TEST DL,0x2                         ; 0047671d
    JNZ 0x00476741                      ; 00476720
        ;   XREF to: 00476741 (CONDITIONAL_JUMP)  ; LAB_00476741
    MOV EAX,EBX                         ; 00476722
    POP EBX                             ; 00476724
    RET                                 ; 00476725
    PUSH 0x5fee50                       ; 00476726 | g_CDocTypeInfo
        ;   Label: LAB_00476726
    PUSH EBX                            ; 0047672b
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 0047672c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 00476731
    PUSH EAX                            ; 00476734
    CALL crt_unknown.c_FUN_005c0336     ; 00476735
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 0047673a
    MOV EAX,EBX                         ; 0047673d
    POP EBX                             ; 0047673f
    RET                                 ; 00476740
    PUSH EAX                            ; 00476741
        ;   Label: LAB_00476741
    CALL crt_unknown.c_FUN_005c0344     ; 00476742
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 00476747
    MOV EAX,EBX                         ; 0047674a
    POP EBX                             ; 0047674c
    RET                                 ; 0047674d

