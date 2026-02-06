; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_cloth_cpp_vectorLengthFast_FUN_0043e350(CVector3f *v)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   v
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; Referenced Globals:
;   int INT_02d7a7b8
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0043e350
        ;   Label: core_cloth.cpp_vectorLengthFast_FUN_0043e350
    MOV EAX,dword ptr [ESP + 0x8]       ; 0043e353
    FLD float ptr [EAX + 0x4]           ; 0043e357
    FMUL ST0                            ; 0043e35a
    FLD float ptr [EAX]                 ; 0043e35c
    FMUL ST0                            ; 0043e35e
    FADDP                               ; 0043e360
    FLD float ptr [EAX + 0x8]           ; 0043e362
    FMUL ST0                            ; 0043e365
    FADDP                               ; 0043e367
    FSTP float ptr [ESP]                ; 0043e369
    MOV EAX,dword ptr [ESP]             ; 0043e36c
    MOV EDX,dword ptr [0x02d7a7b8]      ; 0043e36f | INT_02d7a7b8
    SAR EAX,0x1                         ; 0043e375
    ADD EAX,EDX                         ; 0043e377
    ADD ESP,0x4                         ; 0043e379
    RET                                 ; 0043e37c

