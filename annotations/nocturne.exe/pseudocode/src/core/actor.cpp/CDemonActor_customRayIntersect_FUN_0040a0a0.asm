; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_actor_cpp_CDemonActor_customRayIntersect_FUN_0040a0a0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_005775e7
;   TerminatedCString s_CDemonActor_customRayInt_005775f9
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040a0a0
        ;   Label: core_actor.cpp_CDemonActor_customRayIntersect_FUN_0040a0a0
    MOV EDX,0x5775e7                    ; 0040a0a1 | = "..\\core\\actor.cpp"
    MOV ECX,0x295                       ; 0040a0a6
    PUSH 0x5775f9                       ; 0040a0ab | = "CDemonActor::customRayIntersect shoul..."
    MOV EBX,0x40000000                  ; 0040a0b0
    MOV dword ptr [0x01cc4800],EDX      ; 0040a0b5 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0040a0bb | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0040a0c1
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0040a0c6
    MOV EAX,EBX                         ; 0040a0c9
    POP EBX                             ; 0040a0cb
    RET                                 ; 0040a0cc

