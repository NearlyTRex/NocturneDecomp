; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_actor_cpp_CDemonActor_processActionButton_FUN_0040b120(void)
;
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_00577747
;   TerminatedCString s_CDemonActor_processActio_00577759
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EDX,0x577747                    ; 0040b120 | = "..\\core\\actor.cpp"
        ;   Label: core_actor.cpp_CDemonActor_processActionButton_FUN_0040b120
    MOV ECX,0x562                       ; 0040b125
    PUSH 0x577759                       ; 0040b12a | = "CDemonActor::processActionButton - sh..."
    MOV dword ptr [0x01cc4800],EDX      ; 0040b12f | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0040b135 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0040b13b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    MOV EAX,0x1                         ; 0040b140
    ADD ESP,0x4                         ; 0040b145
    RET                                 ; 0040b148

