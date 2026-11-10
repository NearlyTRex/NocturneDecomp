; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_saveAlphaTransform_FUN_00450700(CDemonCamera *this_ptr,int alpha_index)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   alpha_index
;
; Referenced Globals:
;   undefined4 DAT_01c6e2fc
;   undefined4 DAT_01c6e300
;   undefined4 DAT_01c6e304
;   undefined4 DAT_01c6e308
;   undefined4 DAT_01c6e30c
;   undefined4 DAT_01c6e310
;   undefined4 DAT_01c6e314
;   undefined4 DAT_01c6e318
;   undefined4 DAT_01c6e31c
;   undefined4 DAT_01d72644
;   undefined4 DAT_01d72648
;   undefined4 DAT_01d7264c
;   undefined4 DAT_01d72650
;   undefined4 DAT_01d72654
;   undefined4 DAT_01d72658
;   ... and 3 more
;
; Called Functions:
;   engine_matrix.c_getCameraOrigin_FUN_004e6a90
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00450700
        ;   Label: core_dcamera.cpp_CDemonCamera_saveAlphaTransform_FUN_00450700
    PUSH EDI                            ; 00450701
    SUB ESP,0xc                         ; 00450702
    MOV ESI,ESP                         ; 00450705
    CALL engine_matrix.c_getCameraOrigin_FUN_004e6a90 ; 00450707
        ;   XREF to: 004e6a90 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_getCameraOrigin_FUN_004e6a90()
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0045070c
    LEA EAX,[EDX*0x4 + 0x0]             ; 00450710
    SUB EAX,EDX                         ; 00450717
    MOV EDX,dword ptr [ESP + 0x18]      ; 00450719
    SHL EAX,0x2                         ; 0045071d
    ADD EAX,EDX                         ; 00450720
    LEA EDI,[EAX + 0x11ec]              ; 00450722
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00450728
    SHL EAX,0x2                         ; 0045072c
    MOV ESI,ESP                         ; 0045072f
    ADD EAX,EDX                         ; 00450731
    MOVSD ES:EDI,ESI                    ; 00450733
    MOVSD ES:EDI,ESI                    ; 00450734
    MOVSD ES:EDI,ESI                    ; 00450735
    MOV EDX,dword ptr [0x01c6e2fc]      ; 00450736 | DAT_01c6e2fc
    MOV dword ptr [EAX + 0x124c],EDX    ; 0045073c
    MOV EDX,dword ptr [0x01c6e300]      ; 00450742 | DAT_01c6e300
    MOV dword ptr [EAX + 0x126c],EDX    ; 00450748
    MOV EDX,dword ptr [0x01c6e304]      ; 0045074e | DAT_01c6e304
    MOV dword ptr [EAX + 0x128c],EDX    ; 00450754
    MOV EDX,dword ptr [0x01c6e308]      ; 0045075a | DAT_01c6e308
    MOV dword ptr [EAX + 0x12ac],EDX    ; 00450760
    MOV EDX,dword ptr [0x01c6e30c]      ; 00450766 | DAT_01c6e30c
    MOV dword ptr [EAX + 0x12cc],EDX    ; 0045076c
    MOV EDX,dword ptr [0x01c6e310]      ; 00450772 | DAT_01c6e310
    MOV dword ptr [EAX + 0x12ec],EDX    ; 00450778
    MOV EDX,dword ptr [0x01c6e314]      ; 0045077e | DAT_01c6e314
    MOV dword ptr [EAX + 0x130c],EDX    ; 00450784
    MOV EDX,dword ptr [0x01c6e318]      ; 0045078a | DAT_01c6e318
    MOV dword ptr [EAX + 0x132c],EDX    ; 00450790
    MOV EDX,dword ptr [0x01c6e31c]      ; 00450796 | DAT_01c6e31c
    MOV dword ptr [EAX + 0x134c],EDX    ; 0045079c
    MOV EDX,dword ptr [0x01d72644]      ; 004507a2 | DAT_01d72644
    MOV dword ptr [EAX + 0x136c],EDX    ; 004507a8
    MOV EDX,dword ptr [0x01d72648]      ; 004507ae | DAT_01d72648
    MOV dword ptr [EAX + 0x138c],EDX    ; 004507b4
    MOV EDX,dword ptr [0x01d7264c]      ; 004507ba | DAT_01d7264c
    MOV dword ptr [EAX + 0x13ac],EDX    ; 004507c0
    MOV EDX,dword ptr [0x01d72650]      ; 004507c6 | DAT_01d72650
    MOV dword ptr [EAX + 0x13cc],EDX    ; 004507cc
    MOV EDX,dword ptr [0x01d72654]      ; 004507d2 | DAT_01d72654
    MOV dword ptr [EAX + 0x13ec],EDX    ; 004507d8
    MOV EDX,dword ptr [0x01d72658]      ; 004507de | DAT_01d72658
    MOV dword ptr [EAX + 0x140c],EDX    ; 004507e4
    MOV EDX,dword ptr [0x01d7265c]      ; 004507ea | DAT_01d7265c
    MOV dword ptr [EAX + 0x142c],EDX    ; 004507f0
    MOV EDX,dword ptr [0x01d72660]      ; 004507f6 | DAT_01d72660
    MOV dword ptr [EAX + 0x144c],EDX    ; 004507fc
    MOV EDX,dword ptr [0x01d72664]      ; 00450802 | DAT_01d72664
    MOV dword ptr [EAX + 0x146c],EDX    ; 00450808
    ADD ESP,0xc                         ; 0045080e
    POP EDI                             ; 00450811
    POP ESI                             ; 00450812
    RET                                 ; 00450813

