; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_charactr_cpp_FUN_0042f930(void)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   float FLOAT_0065b810 = 256
;
; Called Functions:
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042f930
        ;   Label: core_charactr.cpp_FUN_0042f930
    SUB ESP,0xc                         ; 0042f931
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0042f934
    MOV EBX,ESP                         ; 0042f938
    FLD float ptr [EAX]                 ; 0042f93a
    FMUL float ptr [0x0065b810]         ; 0042f93c | FLOAT_0065b810
    FISTP dword ptr [EBX]               ; 0042f942
    FLD float ptr [EAX + 0x4]           ; 0042f944
    FMUL float ptr [0x0065b810]         ; 0042f947 | FLOAT_0065b810
    FISTP dword ptr [EBX + 0x4]         ; 0042f94d
    FLD float ptr [EAX + 0x8]           ; 0042f950
    FMUL float ptr [0x0065b810]         ; 0042f953 | FLOAT_0065b810
    FISTP dword ptr [EBX + 0x8]         ; 0042f959
    MOV EAX,ESP                         ; 0042f95c
    MOV EDX,dword ptr [ESP + 0x18]      ; 0042f95e
    PUSH EAX                            ; 0042f962
    LEA EAX,[EDX*0x4 + 0x0]             ; 0042f963
    SUB EAX,EDX                         ; 0042f96a
    MOV EDX,dword ptr [ESP + 0x18]      ; 0042f96c
    SHL EAX,0x4                         ; 0042f970
    MOV EDX,dword ptr [EDX]             ; 0042f973
    ADD EAX,EDX                         ; 0042f975
    PUSH EAX                            ; 0042f977
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0042f978
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0042f97d
    ADD ESP,0xc                         ; 0042f980
    POP EBX                             ; 0042f983
    RET                                 ; 0042f984

