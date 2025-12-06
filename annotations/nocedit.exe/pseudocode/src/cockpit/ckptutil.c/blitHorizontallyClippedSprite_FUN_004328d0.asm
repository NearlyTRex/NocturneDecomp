; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_ckptutil.c_blitHorizontallyClippedSprite_FUN_004328d0(void * sprite_data, int start_x, int dest_y, int end_x, int max_height, int unused_param, int src_y_offset, int src_stride)
;
; Parameters:
; void *           Stack[0x4]:4   sprite_data
; int              Stack[0x8]:4   start_x
; int              Stack[0xc]:4   dest_y
; int              Stack[0x10]:4   end_x
; int              Stack[0x14]:4   max_height
; int              Stack[0x18]:4   unused_param
; int              Stack[0x1c]:4   src_y_offset
; int              Stack[0x20]:4   src_stride
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_BitsPerPixel = 0x8
;   void*[1024] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;
; Called Functions:
;   cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004328d0
        ;   Label: cockpit_ckptutil.c_blitHorizontallyClippedSprite_FUN_004328d0
    PUSH ESI                            ; 004328d1
    PUSH EDI                            ; 004328d2
    PUSH EBP                            ; 004328d3
    SUB ESP,0x18                        ; 004328d4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004328d7
    MOV ESI,dword ptr [ESP + 0x30]      ; 004328db
    MOV EDI,dword ptr [ESP + 0x44]      ; 004328df
    MOV EAX,dword ptr [ESP + 0x38]      ; 004328e3
    SUB EAX,ESI                         ; 004328e7
    INC EAX                             ; 004328e9
    MOV EDX,dword ptr [0x02cf6a9c]      ; 004328ea | void *[1024] g_ScreenBufferArray
    MOV dword ptr [ESP + 0x14],EAX      ; 004328f0
    MOV EAX,[0x02cf6aa0]                ; 004328f4 | g_ScreenBufferArray[1]
    SUB EAX,EDX                         ; 004328f9
    MOV dword ptr [ESP + 0x10],EAX      ; 004328fb
    TEST EBX,EBX                        ; 004328ff
    JNZ 0x00432918                      ; 00432901 | LAB_00432918
        ;   XREF to: 00432918 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 00432903
    LEA EDX,[EDX]                       ; 00432909
    NOP                                 ; 0043290f
    ADD ESP,0x18                        ; 00432910
        ;   Label: LAB_00432910
    POP EBP                             ; 00432913
    POP EDI                             ; 00432914
    POP ESI                             ; 00432915
    POP EBX                             ; 00432916
    RET                                 ; 00432917
    CALL cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760 ; 00432918 | ColorConversionFunc * cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760()
        ;   Label: LAB_00432918
        ;   XREF to: 00431760 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [ESP + 0x34]      ; 0043291d
    MOV EBP,EAX                         ; 00432921
    IMUL ECX,dword ptr [ESP + 0x48]     ; 00432923
    MOV EAX,[0x00679394]                ; 00432928 | int g_WindowWidth
    MOV EDX,EAX                         ; 0043292d
    SAR EDX,0x1f                        ; 0043292f
    SUB EAX,EDX                         ; 00432932
    SAR EAX,0x1                         ; 00432934
    ADD ECX,EBX                         ; 00432936
    ADD EAX,ECX                         ; 00432938
    LEA EBX,[EAX + ESI*0x1]             ; 0043293a
    MOV EDX,dword ptr [0x0067939c]      ; 0043293d | int g_BitsPerPixel
    MOV EAX,dword ptr [ESP + 0x34]      ; 00432943
    MOV ECX,dword ptr [ESP + 0x3c]      ; 00432947
    ADD EAX,EDI                         ; 0043294b
    SUB ECX,EDI                         ; 0043294d
    SHL EAX,0x2                         ; 0043294f
    CMP EDX,0x8                         ; 00432952
    JNZ 0x0043299c                      ; 00432955 | LAB_0043299c
        ;   XREF to: 0043299c (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EAX + 0x2cf6a9c] ; 00432957 | void *[1024] g_ScreenBufferArray
    ADD EDI,ESI                         ; 0043295d
    MOV ESI,dword ptr [ESP + 0x34]      ; 0043295f
    MOV dword ptr [ESP + 0x8],ECX       ; 00432963
    CMP ECX,ESI                         ; 00432967
    JLE 0x00432910                      ; 00432969 | LAB_00432910
        ;   XREF to: 00432910 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x14]      ; 0043296b
        ;   Label: LAB_0043296b
    PUSH ECX                            ; 0043296f
    MOV EDX,dword ptr [ESP + 0x44]      ; 00432970
    MOV EAX,EDI                         ; 00432974
    PUSH EBX                            ; 00432976
    SUB EAX,EDX                         ; 00432977
    PUSH EAX                            ; 00432979
    CALL EBP                            ; 0043297a
    ADD ESP,0xc                         ; 0043297c
    INC ESI                             ; 0043297f
    MOV ECX,dword ptr [ESP + 0x10]      ; 00432980
    MOV EAX,dword ptr [ESP + 0x48]      ; 00432984
    MOV EDX,dword ptr [ESP + 0x8]       ; 00432988
    ADD EDI,ECX                         ; 0043298c
    ADD EBX,EAX                         ; 0043298e
    CMP ESI,EDX                         ; 00432990
    JL 0x0043296b                       ; 00432992 | LAB_0043296b
        ;   XREF to: 0043296b (CONDITIONAL_JUMP)
    ADD ESP,0x18                        ; 00432994
    POP EBP                             ; 00432997
    POP EDI                             ; 00432998
    POP ESI                             ; 00432999
    POP EBX                             ; 0043299a
    RET                                 ; 0043299b
    MOV EDI,dword ptr [EAX + 0x2cf6a9c] ; 0043299c | void *[1024] g_ScreenBufferArray
        ;   Label: LAB_0043299c
    MOV EAX,dword ptr [ESP + 0x10]      ; 004329a2
    MOV EDX,EAX                         ; 004329a6
    SAR EDX,0x1f                        ; 004329a8
    SUB EAX,EDX                         ; 004329ab
    SAR EAX,0x1                         ; 004329ad
    MOV dword ptr [ESP + 0x10],EAX      ; 004329af
    MOV EAX,dword ptr [ESP + 0x40]      ; 004329b3
    MOV dword ptr [ESP + 0xc],ECX       ; 004329b7
    ADD EAX,EAX                         ; 004329bb
    ADD ESI,ESI                         ; 004329bd
    MOV dword ptr [ESP],EAX             ; 004329bf
    MOV EAX,dword ptr [ESP + 0x10]      ; 004329c2
    ADD EDI,ESI                         ; 004329c6
    ADD EAX,EAX                         ; 004329c8
    MOV ESI,dword ptr [ESP + 0x34]      ; 004329ca
    MOV dword ptr [ESP + 0x4],EAX       ; 004329ce
    CMP ECX,ESI                         ; 004329d2
    JLE 0x00432910                      ; 004329d4 | LAB_00432910
        ;   XREF to: 00432910 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x14]      ; 004329da
        ;   Label: LAB_004329da
    PUSH ECX                            ; 004329de
    MOV EDX,dword ptr [ESP + 0x4]       ; 004329df
    MOV EAX,EDI                         ; 004329e3
    PUSH EBX                            ; 004329e5
    SUB EAX,EDX                         ; 004329e6
    PUSH EAX                            ; 004329e8
    CALL EBP                            ; 004329e9
    ADD ESP,0xc                         ; 004329eb
    INC ESI                             ; 004329ee
    MOV ECX,dword ptr [ESP + 0x4]       ; 004329ef
    MOV EAX,dword ptr [ESP + 0x48]      ; 004329f3
    MOV EDX,dword ptr [ESP + 0xc]       ; 004329f7
    ADD EDI,ECX                         ; 004329fb
    ADD EBX,EAX                         ; 004329fd
    CMP ESI,EDX                         ; 004329ff
    JL 0x004329da                       ; 00432a01 | LAB_004329da
        ;   XREF to: 004329da (CONDITIONAL_JUMP)
    ADD ESP,0x18                        ; 00432a03
    POP EBP                             ; 00432a06
    POP EDI                             ; 00432a07
    POP ESI                             ; 00432a08
    POP EBX                             ; 00432a09
    RET                                 ; 00432a0a

