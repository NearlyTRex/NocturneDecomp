; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_transformAndProjectVertex_FUN_0052cc10(SProjectedVertex **vertex_buffer_ptr,int vertex_index,CVector3i *input)
;
; Parameters:
; SProjectedVertex * * Stack[0x4]:4   vertex_buffer_ptr
; int              Stack[0x8]:4   vertex_index
; CVector3i *      Stack[0xc]:4   input
;
; Called Functions:
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052cc10
        ;   Label: core_morph.cpp_transformAndProjectVertex_FUN_0052cc10
    MOV EDX,dword ptr [ESP + 0x10]      ; 0052cc11
    PUSH EDX                            ; 0052cc15
    MOV EDX,dword ptr [ESP + 0x10]      ; 0052cc16
    LEA EAX,[EDX*0x4 + 0x0]             ; 0052cc1a
    SUB EAX,EDX                         ; 0052cc21
    MOV EDX,dword ptr [ESP + 0xc]       ; 0052cc23
    SHL EAX,0x4                         ; 0052cc27
    MOV EDX,dword ptr [EDX]             ; 0052cc2a
    ADD EAX,EDX                         ; 0052cc2c
    PUSH EAX                            ; 0052cc2e
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0052cc2f
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0052cc34
    POP EBX                             ; 0052cc37
    RET                                 ; 0052cc38

