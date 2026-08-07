; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_projectCachedPointUnchecked_FUN_004cd300(int cache_index)
;
; Parameters:
; int              Stack[0x4]:4   cache_index
;
; XREF[3]:
;   engine_3d.c_clipAndDrawLine2D_FUN_00409290 at 004094c5
;   engine_3d.c_clipAndDrawLine3D_FUN_00409590 at 004097cf
;   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0 at 00461332
;
; Referenced Globals:
;   undefined4 DAT_005c5014
;   undefined4 DAT_005c5018
;   undefined4 DAT_005c501c
;   undefined4 DAT_005c5020
;   undefined4 DAT_005c5024
;   undefined4 DAT_005c5028
;   SProjectionParams g_Projection
;   undefined4 g_Projection.neg_half_height_fixed
;   undefined4 g_Projection.center_x_fixed
;   undefined4 g_Projection.center_y_fixed
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cd300
        ;   Label: engine_matrix.c_projectCachedPointUnchecked_FUN_004cd300
    PUSH ESI                            ; 004cd301
    PUSH EDI                            ; 004cd302
    MOV EAX,dword ptr [ESP + 0x10]      ; 004cd303
    LEA ECX,[EAX*0x4 + 0x0]             ; 004cd307
    SUB ECX,EAX                         ; 004cd30e
    MOV EAX,0x7fffffff                  ; 004cd310
    SHL ECX,0x4                         ; 004cd315
    MOV EDX,EAX                         ; 004cd318
    MOV EBX,dword ptr [ECX + 0x5c501c]  ; 004cd31a | DAT_005c501c
    SAR EDX,0x1f                        ; 004cd320
    IDIV EBX                            ; 004cd323
    MOV dword ptr [ECX + 0x5c5020],EAX  ; 004cd325 | DAT_005c5020
    MOV EDX,dword ptr [0x01c00c48]      ; 004cd32b | g_Projection
    MOV EBX,dword ptr [ECX + 0x5c501c]  ; 004cd331 | DAT_005c501c
    MOV EAX,dword ptr [ECX + 0x5c5014]  ; 004cd337 | DAT_005c5014
    IMUL EDX                            ; 004cd33d
    IDIV EBX                            ; 004cd33f
    MOV ESI,dword ptr [0x01c00c50]      ; 004cd341 | g_Projection.center_x_fixed
    ADD EAX,ESI                         ; 004cd347
    MOV dword ptr [ECX + 0x5c5024],EAX  ; 004cd349 | DAT_005c5024
    MOV EDX,dword ptr [0x01c00c4c]      ; 004cd34f | g_Projection.neg_half_height_fixed
    MOV EBX,dword ptr [ECX + 0x5c501c]  ; 004cd355 | DAT_005c501c
    MOV EAX,dword ptr [ECX + 0x5c5018]  ; 004cd35b | DAT_005c5018
    IMUL EDX                            ; 004cd361
    IDIV EBX                            ; 004cd363
    MOV EDI,dword ptr [0x01c00c54]      ; 004cd365 | g_Projection.center_y_fixed
    ADD EAX,EDI                         ; 004cd36b
    MOV dword ptr [ECX + 0x5c5028],EAX  ; 004cd36d | DAT_005c5028
    POP EDI                             ; 004cd373
    POP ESI                             ; 004cd374
    POP EBX                             ; 004cd375
    RET                                 ; 004cd376

