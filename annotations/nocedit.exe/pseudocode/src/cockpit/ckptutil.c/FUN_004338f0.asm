; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void cockpit_ckptutil_c_FUN_004338f0(void)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; Called Functions:
;   cockpit_ckptutil.c_drawLineAAWithBlending_FUN_004339c0
;   cockpit_pkbitmap.cpp_CPackedBitmap_getPixelValue_FUN_0054a9b0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004338f0
        ;   Label: cockpit_ckptutil.c_FUN_004338f0
    PUSH EBP                            ; 004338f1
    SUB ESP,0xc                         ; 004338f2
    MOV EAX,dword ptr [ESP + 0x18]      ; 004338f5
    MOV EAX,dword ptr [EAX + 0x18]      ; 004338f9
    TEST EAX,EAX                        ; 004338fc
    JZ 0x004339b1                       ; 004338fe
        ;   XREF to: 004339b1 (CONDITIONAL_JUMP)  ; LAB_004339b1
    MOV EDX,dword ptr [ESP + 0x20]      ; 00433904
    XOR ESI,ESI                         ; 00433908
    TEST EDX,EDX                        ; 0043390a
    JLE 0x004339b1                      ; 0043390c
        ;   XREF to: 004339b1 (CONDITIONAL_JUMP)  ; LAB_004339b1
    PUSH EDI                            ; 00433912
    PUSH EBX                            ; 00433913
    MOV EBX,dword ptr [ESP + 0x24]      ; 00433914
    MOV AX,word ptr [EBX]               ; 00433918
        ;   Label: LAB_00433918
    MOVSX EBP,AX                        ; 0043391b
    MOV AX,word ptr [EBX + 0x2]         ; 0043391e
    MOVSX EDI,AX                        ; 00433922
    MOV AX,word ptr [EBX + 0x4]         ; 00433925
    CWDE                                ; 00433929
    MOV dword ptr [ESP + 0x8],EAX       ; 0043392a
    MOV AX,word ptr [EBX + 0x6]         ; 0043392e
    PUSH EDI                            ; 00433932
    ADD EAX,EAX                         ; 00433933
    PUSH EBP                            ; 00433935
    SAR AX,0x1                          ; 00433936
    MOV ECX,dword ptr [ESP + 0x28]      ; 00433939
    CWDE                                ; 0043393d
    PUSH ECX                            ; 0043393e
    MOV dword ptr [ESP + 0x18],EAX      ; 0043393f
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_getPixelValue_FUN_0054a9b0 ; 00433943
        ;   XREF to: 0054a9b0 (UNCONDITIONAL_CALL)  ; int cockpit_pkbitmap.cpp_CPackedBitmap_getPixelValue_FUN_0054a9b0(CPackedBitmap * this_ptr, int x_coordinate, int row_index)
    MOV dword ptr [ESP + 0x1c],EAX      ; 00433948
    ADD ESP,0xc                         ; 0043394c
    MOV EAX,dword ptr [ESP + 0xc]       ; 0043394f
    PUSH EAX                            ; 00433953
    MOV EDX,dword ptr [ESP + 0xc]       ; 00433954
    PUSH EDX                            ; 00433958
    MOV ECX,dword ptr [ESP + 0x28]      ; 00433959
    PUSH ECX                            ; 0043395d
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_getPixelValue_FUN_0054a9b0 ; 0043395e
        ;   XREF to: 0054a9b0 (UNCONDITIONAL_CALL)  ; int cockpit_pkbitmap.cpp_CPackedBitmap_getPixelValue_FUN_0054a9b0(CPackedBitmap * this_ptr, int x_coordinate, int row_index)
    MOV DX,word ptr [EBX + 0x6]         ; 00433963
    ADD ESP,0xc                         ; 00433967
    SHR DX,0xf                          ; 0043396a
    AND EDX,0xffff                      ; 0043396e
    PUSH EDX                            ; 00433974
    PUSH EAX                            ; 00433975
    MOV EAX,dword ptr [ESP + 0x18]      ; 00433976
    MOV EDX,dword ptr [ESP + 0x38]      ; 0043397a
    PUSH EAX                            ; 0043397e
    MOV EAX,dword ptr [ESP + 0x18]      ; 0043397f
    ADD EAX,EDX                         ; 00433983
    MOV ECX,dword ptr [ESP + 0x38]      ; 00433985
    PUSH EAX                            ; 00433989
    MOV EAX,dword ptr [ESP + 0x18]      ; 0043398a
    ADD EAX,ECX                         ; 0043398e
    PUSH EAX                            ; 00433990
    ADD EDI,EDX                         ; 00433991
    PUSH EDI                            ; 00433993
    ADD EBP,ECX                         ; 00433994
    PUSH EBP                            ; 00433996
    CALL cockpit_ckptutil.c_drawLineAAWithBlending_FUN_004339c0 ; 00433997
        ;   XREF to: 004339c0 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_drawLineAAWithBlending_FUN_004339c0(int x0, int y0, int x1, int y1, ...)
    ADD ESP,0x1c                        ; 0043399c
    INC ESI                             ; 0043399f
    MOV ECX,dword ptr [ESP + 0x28]      ; 004339a0
    ADD EBX,0x8                         ; 004339a4
    CMP ESI,ECX                         ; 004339a7
    JL 0x00433918                       ; 004339a9
        ;   XREF to: 00433918 (CONDITIONAL_JUMP)  ; LAB_00433918
    POP EBX                             ; 004339af
    POP EDI                             ; 004339b0
    ADD ESP,0xc                         ; 004339b1
        ;   Label: LAB_004339b1
    POP EBP                             ; 004339b4
    POP ESI                             ; 004339b5
    RET                                 ; 004339b6

