; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_CFireEffect_FUN_004c91e0(CFireEffect * this_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CTrail* g_TrailActiveListHead
;
; Called Functions:
;   core_fire.cpp_FUN_004c6170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c91e0
        ;   Label: core_fire.cpp_CFireEffect_FUN_004c91e0
    PUSH ESI                            ; 004c91e1
    PUSH EDI                            ; 004c91e2
    MOV EDX,dword ptr [ESP + 0x20]      ; 004c91e3
    PUSH EDX                            ; 004c91e7
    MOV EDX,dword ptr [0x02d72588]      ; 004c91e8 | g_TrailActiveListHead
    MOV ECX,dword ptr [ESP + 0x20]      ; 004c91ee
    LEA EAX,[EDX*0x4 + 0x0]             ; 004c91f2
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004c91f9
    SUB EAX,EDX                         ; 004c91fd
    PUSH ECX                            ; 004c91ff
    SHL EAX,0x2                         ; 004c9200
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004c9203
    SUB EAX,EDX                         ; 004c9207
    PUSH EBX                            ; 004c9209
    SHL EAX,0x3                         ; 004c920a
    PUSH ESI                            ; 004c920d
    ADD EAX,0x2d7258c                   ; 004c920e
    PUSH EAX                            ; 004c9213
    CALL core_fire.cpp_FUN_004c6170     ; 004c9214
        ;   XREF to: 004c6170 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004c6170()
    MOV EDI,dword ptr [0x02d72588]      ; 004c9219 | g_TrailActiveListHead
    INC EDI                             ; 004c921f
    ADD ESP,0x14                        ; 004c9220
    MOV dword ptr [0x02d72588],EDI      ; 004c9223 | g_TrailActiveListHead
    CMP EDI,0x32                        ; 004c9229
    JGE 0x004c9232                      ; 004c922c
        ;   XREF to: 004c9232 (CONDITIONAL_JUMP)  ; LAB_004c9232
    POP EDI                             ; 004c922e
    POP ESI                             ; 004c922f
    POP EBX                             ; 004c9230
    RET                                 ; 004c9231
    XOR EAX,EAX                         ; 004c9232
        ;   Label: LAB_004c9232
    MOV [0x02d72588],EAX                ; 004c9234 | g_TrailActiveListHead
    POP EDI                             ; 004c9239
    POP ESI                             ; 004c923a
    POP EBX                             ; 004c923b
    RET                                 ; 004c923c

