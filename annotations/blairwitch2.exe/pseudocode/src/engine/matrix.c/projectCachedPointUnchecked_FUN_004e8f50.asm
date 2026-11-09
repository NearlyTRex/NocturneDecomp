; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_projectCachedPointUnchecked_FUN_004e8f50(int cache_index)
;
; Parameters:
; int              Stack[0x4]:4   cache_index
;
; XREF[3]:
;   engine_3d.c_clipAndDrawLine2D_FUN_00407cc0 at 00407ef5
;   engine_3d.c_clipAndDrawLine3D_FUN_00407fc0 at 004081ff
;   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046b970 at 0046bc02
;
; Referenced Globals:
;   undefined4 DAT_00622014
;   undefined4 DAT_00622018
;   undefined4 DAT_0062201c
;   undefined4 DAT_00622020
;   undefined4 DAT_00622024
;   undefined4 DAT_00622028
;   undefined4 DAT_01c35e38
;   undefined4 DAT_01c35e3c
;   undefined4 DAT_01c35e40
;   undefined4 DAT_01c35e44
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e8f50
        ;   Label: engine_matrix.c_projectCachedPointUnchecked_FUN_004e8f50
    PUSH ESI                            ; 004e8f51
    PUSH EDI                            ; 004e8f52
    MOV EAX,dword ptr [ESP + 0x10]      ; 004e8f53
    LEA ECX,[EAX*0x4 + 0x0]             ; 004e8f57
    SUB ECX,EAX                         ; 004e8f5e
    MOV EAX,0x7fffffff                  ; 004e8f60
    SHL ECX,0x4                         ; 004e8f65
    MOV EDX,EAX                         ; 004e8f68
    MOV EBX,dword ptr [ECX + 0x62201c]  ; 004e8f6a | DAT_0062201c
    SAR EDX,0x1f                        ; 004e8f70
    IDIV EBX                            ; 004e8f73
    MOV dword ptr [ECX + 0x622020],EAX  ; 004e8f75 | DAT_00622020
    MOV EDX,dword ptr [0x01c35e38]      ; 004e8f7b | DAT_01c35e38
    MOV EBX,dword ptr [ECX + 0x62201c]  ; 004e8f81 | DAT_0062201c
    MOV EAX,dword ptr [ECX + 0x622014]  ; 004e8f87 | DAT_00622014
    IMUL EDX                            ; 004e8f8d
    IDIV EBX                            ; 004e8f8f
    MOV ESI,dword ptr [0x01c35e40]      ; 004e8f91 | DAT_01c35e40
    ADD EAX,ESI                         ; 004e8f97
    MOV dword ptr [ECX + 0x622024],EAX  ; 004e8f99 | DAT_00622024
    MOV EDX,dword ptr [0x01c35e3c]      ; 004e8f9f | DAT_01c35e3c
    MOV EBX,dword ptr [ECX + 0x62201c]  ; 004e8fa5 | DAT_0062201c
    MOV EAX,dword ptr [ECX + 0x622018]  ; 004e8fab | DAT_00622018
    IMUL EDX                            ; 004e8fb1
    IDIV EBX                            ; 004e8fb3
    MOV EDI,dword ptr [0x01c35e44]      ; 004e8fb5 | DAT_01c35e44
    ADD EAX,EDI                         ; 004e8fbb
    MOV dword ptr [ECX + 0x622028],EAX  ; 004e8fbd | DAT_00622028
    POP EDI                             ; 004e8fc3
    POP ESI                             ; 004e8fc4
    POP EBX                             ; 004e8fc5
    RET                                 ; 004e8fc6

